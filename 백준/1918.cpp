#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#include <stack>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

stack<char> st;
string str, ans;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')
            ans += str[i];
        else{
            if(st.empty()) st.push(str[i]);
            else{
                if(str[i]=='(') st.push(str[i]);
                
                else if(str[i]==')'){
                    while(1){
                        char temp = st.top();
                        st.pop();
                        if(temp=='(') break;
                        ans+=temp;
                    }
                }
                
                else if(str[i]=='+' || str[i]=='-'){
                    while(!st.empty() && st.top() != '('){
                        ans+=st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                }
                
                else if(str[i]=='*' || str[i]=='/'){
                    while(!st.empty() && (st.top() == '*' || st.top() == '/')){
                        ans+=st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                }
            }
        }
    }
    
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    
    cout << ans << endl;
    return 0;
}
