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

int n, m;
string site, pw, findsite;

map<string, string> mp;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> site >> pw;
        mp[site] = pw;
    }
    
    for(int i=0; i<m; i++){
        cin >> findsite;
        cout << mp[findsite] << endl;
    }
    
    return 0;
}
