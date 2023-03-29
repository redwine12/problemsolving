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

map<int, int> mp;
map<int, int> seq;
vector<pair<int, int>> v;

int n, c, num;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return seq[a.first] < seq[b.first];
    
    else return a.second > b.second;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> c;
    for(int i=0; i<n; i++){
        cin >> num;
        mp[num]++;
        if(!seq[num]) seq[num] = i+1;
    }

    for(auto c : mp) v.push_back(c);

    sort(v.begin(), v.end(), cmp);
    
    for(auto c : v){
        for(int i=0; i<c.second; i++){
            cout << c.first << " ";
        }
    }
    
    cout << endl;
    return 0;
}
