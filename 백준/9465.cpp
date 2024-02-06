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

int t, n;
int arr[2][100001], dp[2][100001];

void input(){

}

void setup() {
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[0][1] = arr[0][1]+dp[1][0];
    dp[1][1] = arr[1][1]+dp[0][0];
}

void solve() {
    setup();

    for(int i=2; i<n; i++){
        dp[0][i] = arr[0][i] + max(dp[1][i-1], dp[1][i-2]);
        dp[1][i] = arr[1][i] + max(dp[0][i-1], dp[0][i-2]);
    }

    int ans = max(dp[0][n-1], dp[1][n-1]);
    cout << ans << endl;
}

int main(int argc, const char * argv[]){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[0][i];
        for(int i=0; i<n; i++) cin >> arr[1][i];

        solve();
    }

    return 0;
}
