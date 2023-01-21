#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <stack>

using namespace std;
typedef long long ll;

string str;
stack<char> st;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    while(1){
        stack<char> st;
        bool flag = true;
        
        getline(cin, str);
        if(str == ".") return 0;
        
        for(int i=0; i<str.size(); i++){
            if(str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            
                if(str[i] == ')'){
                    if(!st.empty() && st.top() == '(')
                        st.pop();
                    else {
                        cout << "no" << endl;
                        flag = false;
                        break;
                    }
                }
                
                else if(str[i] == ']'){
                    if(!st.empty() && st.top() == '[')
                        st.pop();
                    else {
                        cout << "no" << endl;
                        flag = false;
                        break;
                    }
                }
            }
        
        if(flag){
            if(st.empty()) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}
