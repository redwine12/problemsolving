#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#include <stack>

using namespace std;

vector<char> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    int t;
    cin >> t;
    
    while(t--){
        v.clear();
        cin >> str;
        bool ansflag = true;
        for(int i=0; i<str.size(); i++){
            if(str[i] == '(')
                v.push_back(str[i]);
            else if(str[i] == ')' && !v.empty())
                v.pop_back();
            else{
                ansflag = false; break;
            }
        }
        
        if(!v.empty()) ansflag = false;
    
        if(ansflag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
