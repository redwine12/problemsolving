#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int m, n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    cin >> m;
    vector<int> vv;
    int input;
    for(int i=0; i<m; i++){
        cin >> input;
        vv.push_back(upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input));
    }
    
    for(auto c: vv) cout << c << " ";
    
    cout << endl;
    
    return 0;
}



// + 추가
// map container 를 이용한 풀이

#include <map>

int m, n;
map<int, int> mp;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        mp[num]++;
    }
  
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> num;
        cout << mp[num] << " ";
    }
    return 0;
}
