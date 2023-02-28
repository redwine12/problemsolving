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

#define MOD 1000000000;

int n, ans = 0;
int dp[101][10];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    for(int i=1; i<=9; i++)
        dp[1][i]=1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            if(j==0) {
                dp[i][j] = dp[i-1][1] % MOD;
            }
            else if(j==9) {
                dp[i][j] = dp[i-1][8] % MOD;
            }

            else dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1]) % MOD;
        }
    }
    
    for(int i=0; i<=9; i++) ans = (ans + dp[n][i]) % MOD;

    cout << ans << endl;
    return 0;
}
