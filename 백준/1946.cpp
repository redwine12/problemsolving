#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

int t, n, a, b;
vector<pair<int, int>> v;


void solve() {
    sort(v.begin(), v.end());

    int cnt = 1, temp = v[0].second;

    for(int i=1; i<n; i++){
        if(v[i].second < temp){
            cnt++;
            temp = v[i].second;
        }
    }

    cout << cnt << endl;
}

int main(int argc, const char * argv[]){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            v.push_back({a,b});
        }

        solve();

        v.clear();
    }

    return 0;
}
