#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

int n, ans(0);
int dp[501][501] = {0, };

void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> dp[i][j];
        }
    }
}

void solve() {
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0) dp[i][j] += dp[i-1][0];
            else if(i==j) dp[i][j] += dp[i-1][j-1];
            else dp[i][j] += max(dp[i-1][j], dp[i-1][j-1]);
        }
    }
    
    for(int j=0; j<n; j++) ans = max(ans, dp[n-1][j]);
}

int main(int argc, const char * argv[]){
    input();
    
    solve();
    
    cout << ans << endl;
}
