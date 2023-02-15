#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    ll sum = 0, ans = 0;
    for(int i=0; i<v.size(); i++)
        sum += v[i];
    
    for(int i=0; i<n-1; i++){
        sum -= v[i];
        ans += v[i] * sum;
    }
    
    cout << ans << endl;
    
    return 0;
}
