#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, n;
ll dp[103];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4; i<=100; i++)
        dp[i] = dp[i-2] + dp[i-3];
    
    cin >> t;
    while(t--){
        cin >> n;
        cout << dp[n] << endl;
    }
    
    return 0;
}
