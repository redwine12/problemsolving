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

int n, m;
int arr[1025][1025];
int dp[1025][1025];
int pos[100001][4];

int xpos1, ypos1, xpos2, ypos2;

void solve(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
            dp[i][j] = (dp[i-1][j]+dp[i][j-1]) - dp[i-1][j-1] + arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        cin >> xpos1 >> ypos1 >> xpos2 >> ypos2;

        cout << dp[xpos2][ypos2] - (dp[xpos2][ypos1-1]+dp[xpos1-1][ypos2]) + dp[xpos1-1][ypos1-1] << endl;
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    solve();

    return 0;
}
