#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll dp[1000005];
int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 2;
    
    int i=3;
    for( ; i<=n; i++)
        dp[i] = (dp[i-1]             + dp[i-2]) % 15746;
    
    cout << dp[n] << endl;
    
    return 0;
}
