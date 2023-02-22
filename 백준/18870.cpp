#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#include <map>

using namespace std;
typedef long long ll;

#define MAX 1000001

map<int, int> mp;
int pos[MAX];
int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
        pos[i] = v[i];
    }
    
    sort(v.begin(), v.end());
    
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(mp.find(v[i]) != mp.end()) continue;
        mp[v[i]] = count;
        count++;
    }
    
    for(int i=0; i<n; i++){
        cout << mp[pos[i]] << " ";
    }
    
    cout << endl;
    return 0;
}
