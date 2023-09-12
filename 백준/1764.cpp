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

map<string, int> mp;

vector<string> v;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> str;
        mp[str]++;
    }
    
    for(int i=0; i<m; i++){
        cin >> str;
        mp[str]++;
        if(mp[str] > 1){
            v.push_back(str);
        }
    }
    
    sort(v.begin(), v.end());

    cout << v.size() << endl;
    for(auto c : v)
        cout << c << endl;
    
    return 0;
}
