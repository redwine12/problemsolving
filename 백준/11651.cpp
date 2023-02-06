#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t;
vector<pair<int, int>> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    for(int i=0; i<t; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<t; i++){
        cout << v[i].second << " " << v[i].first << endl;
    }
    
    return 0;
}
