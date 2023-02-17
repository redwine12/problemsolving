#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int m, s;

map<string, int> mp;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m >> s;

    for(int i=0; i<m; i++){
        cin >> str;
        mp[str]++;
    }
    
    int ans = 0;
    for(int i=0; i<s; i++){
        cin >> str;
        if(mp[str] >= 1) ans++;
    }
    
    cout << ans << endl;
    return 0;
}
