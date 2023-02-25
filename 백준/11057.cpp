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

ll dp[1005][10];
int n;

void solve(int n){
    for(int i=0; i<=9; i++)
        dp[1][i] = 1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            if(j==0){
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007;
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    solve(n);
    
    int sum = 0;
    for(int i=0; i<=9; i++){
        sum += dp[n][i];
    }
    
    cout << sum%10007 << endl;
    
    
    return 0;
}
