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

int n, ans = 0, num;
int dp[1005];

vector<int> v;

int solve(){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(v[i]>v[j] & dp[j]+v[i] > dp[i]){
                dp[i] = dp[j] + v[i];
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
        dp[i] = v[i];
    }
    
    ans = solve();
    
    cout << ans << endl;
    return 0;
}
