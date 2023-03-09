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

int dp[1000005];
int n;

void solve(){
    while(n!=1){
        cout << n << " ";
        if(n%2 == 0 && dp[n] == dp[n/2]+1) n/=2;
        else if(n%3 == 0 && dp[n] == dp[n/3]+1) n/=3;
        else if(dp[n] == dp[n-1] + 1) n-=1;
    }
    return;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    dp[1] = 0;
    
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+1;
        if(i%2 == 0) dp[i] = min(dp[i], dp[i/2]+1);
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3]+1);
    }
    
    cout << dp[n] << endl;
    
    solve();
    cout << 1 << endl;
    
    return 0;
}
