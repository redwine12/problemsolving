#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#include <queue>

using namespace std;

int n, num, temp;
string str;
queue<int> q;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        if(str == "push"){
            cin >> num; q.push(num);
        }
        
        else if(str == "pop"){
            if(q.empty())
                cout << "-1" << endl;
            else{
                temp = q.front();
                q.pop();
                cout << temp << endl;
            }
        }
        
        else if(str == "size"){
            cout << q.size() << endl;
        }
        
        else if(str == "empty"){
            if(q.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        
        else if(str == "front"){
            if(q.empty()) cout << "-1" << endl;
            else cout << q.front() << endl;
        }
        
        else if(str == "back"){
            if(q.empty()) cout << "-1" << endl;
            else cout << q.back() << endl;
        }
    }
    return 0;
}
