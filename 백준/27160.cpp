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
int s,b,l,p;
int count[100001] = {0, };

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    while(t--){
        cin >> str >> num;
        if(str == "STRAWBERRY")
            s+=num;

        else if(str == "BANANA") b+=num;
            
        else if(str == "LIME") l+=num;
            
        else if(str == "PLUM") p+=num;
    }
    
    if(s==5 || b==5 || l==5 || p==5) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
