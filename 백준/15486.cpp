#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX 1500001

using namespace std;
typedef long long ll;

int dp[MAX] = {0, };
int P[MAX];
int T[MAX];
int n;


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> T[i] >> P[i];
    }
    
    dp[1] = 0;
    int ans = -1;
    for(int i=1; i<=n+1; i++){
        ans = max(ans, dp[i]);
        if(i+T[i] > n+1) continue;
        else dp[i+T[i]] = max(dp[i+T[i]], ans+P[i]);
        
//        cout << "dp[" << i << "] = " << dp[i] << endl;
    }
    
    cout << ans << endl;
    return 0;
}
