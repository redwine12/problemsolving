#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;
int dp[305];
int point[301];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=1; i<=n; i++) cin >> point[i];
    
    dp[1] = point[1];
    dp[2] = point[1]+point[2];
    dp[3] = max(point[1], point[2]) + point[3];
    
    int i=4;
    for(; i <= n; i++){
        dp[i] = max(dp[i-3] + point[i-1], dp[i-2]) + point[i];
    }
    
    cout << dp[n] << endl;
    return 0;
}
