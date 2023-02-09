#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll dp[1005];
int n;

void solve(){
    for(int i=3; i<=1000; i++){
        dp[i] = (dp[i-2] + dp[i-1]) % 10007;
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    dp[1] = 1;
    dp[2] = 2;
    
    solve();
    
    cin >> n;
    
    cout << dp[n] << endl;
    return 0;
}
