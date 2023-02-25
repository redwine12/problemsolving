#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <map>

using namespace std;
typedef long long ll;

map<string, int> mp;

int t, n;
string a,b;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    while(t--){
        mp.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            if(mp.find(b) == mp.end()){
                mp[b] = 1;
            }
            else mp[b]++;
        }
        int ans = 1;
        for(auto c : mp)
            ans *= c.second+1;
        
        cout << ans-1 << endl;
    }
    
    return 0;
}
