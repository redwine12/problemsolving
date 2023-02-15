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
ll dp[100005];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> dp[i];
        if(i != 1 && dp[i-1] >= 0)
            dp[i] = dp[i] + dp[i-1];
    }
    
    int max = -912452;
    for(int i=1; i<=n; i++){
        if(dp[i] > max) max = dp[i];
    }
    
    cout << max << endl;
    return 0;
}
