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

int t;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    
    int count = 0;
    while(t--){
        stack<char> st;
        
        cin >> str;
        
        for(auto c:str){
            if(st.empty()) st.push(c);
            
            else{
                if(c == st.top()) st.pop();
                else st.push(c);
            }
        }
        
        if(st.empty()) count++;
    }
    
    cout << count << endl;
    return 0;
}
