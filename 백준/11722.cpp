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

int n, ans = 0;
int dp[1005];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    for(int i=0; i<n; i++){
        dp[i] = 1;
        for(int j=0; j<i; j++){
            if(v[i] < v[j]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
            ans = (dp[i] > ans) ? dp[i] : ans;
        }
    }
    
    cout << ans << endl;
    return 0;
}
