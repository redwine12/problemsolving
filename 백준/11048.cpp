#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll board[1005][1005];
ll dp[1005][1005] = {0, };
int n, m;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> board[i][j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
            // * 대각선은 생각할 필요없음, 최대가 될수 없음 *
            dp[i][j] = board[i][j] + max(dp[i-1][j], dp[i][j-1]);
        }
    }

    
    cout << dp[n][m] << endl;
    return 0;
}
