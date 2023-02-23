#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#include <deque>

using namespace std;

deque<int> dq;
int n, num, temp;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    while(n--){
        cin >> str;
        
        if(str == "push_front"){
            cin >> num;
            dq.push_front(num);
        }
        
        else if(str == "push_back"){
            cin >> num;
            dq.push_back(num);
        }
        
        else if(str == "pop_front"){
            if(dq.empty()) cout << "-1" << endl;
            else{
                temp = dq.front();
                cout << temp << endl;
                dq.pop_front();
            }
        }
        
        else if(str == "pop_back"){
            if(dq.empty()) cout << "-1" << endl;
            else{
                temp = dq.back();
                cout << temp << endl;
                dq.pop_back();
            }
        }
        
        else if(str == "size") cout << dq.size() << endl;
        
        else if(str == "empty"){
            if(dq.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        
        else if(str == "front"){
            if(dq.empty()) cout << "-1" << endl;
            else cout << dq.front() << endl;
        }
        
        else if(str == "back"){
            if(dq.empty()) cout << "-1" << endl;
            else cout << dq.back() << endl;
        }
    }
    
    return 0;
}
