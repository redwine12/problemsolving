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

int n, k;
int dp[101][100001];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> k;
    int weight[101];
    int value[101];
    
    for(int i=1; i<=n; i++){
        cin >> weight[i] >> value[i];
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j>=weight[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    

    cout << dp[n][k] << endl;
    return 0;
}
