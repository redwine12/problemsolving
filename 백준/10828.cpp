#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#include <stack>

using namespace std;

stack<int> s;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        int push;
        cin >> str;
        
        if(str == "push"){
            cin >> push;
            s.push(push);
        }
        
        else if(str == "pop"){
            if(s.empty())
                cout << "-1" << endl;
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        
        else if(str == "size")
            cout << s.size() << endl;
        
        else if(str == "empty"){
            if(s.empty() == true)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if(str == "top"){
            if(s.empty() == true)
                cout << "-1" << endl;
            else
                cout << s.top() << endl;
        }
    }
    return 0;
}
