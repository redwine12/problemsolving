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

int n;
int cnt1=0, cnt2=0;

int matrix_path_rec(int arr[16][16], int i, int j){
    if(i==0 || j==0){
        cnt1++;
        return 0;
    }
    else return (arr[i][j] + (matrix_path_rec(arr, i - 1, j), matrix_path_rec(arr, i, j - 1)));
}
int matrix_path(int arr[16][16], int n){
    return matrix_path_rec(arr, n, n);
}

int matrix_path_dp(int arr[16][16], int n){
    int dp[16][16];
    for(int i=0; i<=n; i++) dp[i][0] = 0;
    for(int j=1; j<=n; j++) dp[0][j] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cnt2++;
            dp[i][j] = arr[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][n];
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    int n, arr[16][16];
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }
    matrix_path(arr, n);
    matrix_path_dp(arr, n);
    cout << cnt1 << endl << cnt2 << endl;
    return 0;
}
