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

ll n, ans = 0, ansnum;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<ll> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int count = 1;
    ansnum = v[0];
    ans = 1;
    for(int i=1; i<v.size(); i++){
        if (v[i] == v[i-1]){
            count++;
            if(ans < count){
                ans = count;
                ansnum = v[i];
            }
        }
        else count = 1;
    }
    
    cout << ansnum << endl;
    return 0;
}
