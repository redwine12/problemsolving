#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <list>

using namespace std;
typedef long long ll;

int t;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    
    while(t--){
        list<char> v;
        list<char>::iterator cursor = v.begin();
        cin >> str;

        for(auto c: str){
            if(c == '<'){
                if(cursor != v.begin()) cursor--;
            }
            
            else if(c == '>'){
                if(cursor != v.end()) cursor++;
            }
            
            else if(c == '-'){
                if(cursor != v.begin()){
                    cursor--;
                    cursor = v.erase(cursor);
                }
            }
            
            else v.insert(cursor, c);
        }
        
        for(auto e:v) cout << e;
        cout << endl;
    }
    return 0;
}
