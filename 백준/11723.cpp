#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

vector<int> v;
bool checking[21] = {false, };
int m, num;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m;
    while(m--){
        cin >> str;
        
        if(str == "add"){
            cin >> num;
            if(checking[num] == true) continue;
            else{
                v.push_back(num);
                checking[num] = true;
            }
        }
        
        else if(str == "remove"){
            cin >> num;
            if(checking[num] == true){
                for(int i=0; i<v.size(); i++){
                    if(v[i] == num) v.erase(v.begin() + i);
                }
                checking[num] = false;
            }
            else continue;
        }
            
        else if(str == "check"){
            cin >> num;
            if(checking[num] == true) cout << "1" << endl;
            else cout << "0" << endl;
        }
        
        else if(str == "toggle"){
            cin >> num;
            if(checking[num] == true){
                for(int i=0; i<v.size(); i++){
                    if(v[i] == num) v.erase(v.begin() + i);
                }
                checking[num] = false;
            }

            else{
                v.push_back(num);
                checking[num] = true;
            }
        }
        
        else if(str == "all"){
            v.clear();
            for(int i=1; i<=20; i++){
                v.push_back(i);
                checking[i] = true;
            }
        }
        
        else if(str == "empty"){
            v.clear();
            fill(checking, checking+21, false);
            for(int i=0; i<21; i++){
                checking[i] = false;
            }
        }
        
    }
    
    return 0;
}
