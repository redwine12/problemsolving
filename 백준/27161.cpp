#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, num;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    int i=0;
    bool flag = false;
    while(t--){
        if(flag){
            i--;
            if(i==0) i=12;
        }
        else{
            i++;
            if(i==13) i=1;
        }
        
        cin >> str >> num;
        
        if(str == "HOURGLASS"){
            if(num == i){
                cout << i << " " << "NO" << endl; continue;
            }
            else{
                if(flag == true) flag = false;
                else if(flag == false) flag = true;
                cout << i << " " << "NO" << endl;
            }
        }
        
        else{
            if(i == num) cout << i << " " << "YES" << endl;
            else cout << i << " " << "NO" << endl;
        }
        
    }
    
    return 0;
}
