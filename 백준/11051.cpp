#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll dp[1005][1005];
int n,k;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> k;
    
    dp[1][1] = 1;
    dp[1][0] = 1;
    
    int i=2;
    for( ; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(i==j | j==0) dp[i][j] = 1;
            else
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
        }
    }
    
    cout << dp[n][k] << endl;
    return 0;
}
