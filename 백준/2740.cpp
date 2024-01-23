#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, k;
    int a[101][101];
    int b[101][101];
    int ans[101][101];
    
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cin >> a[i][j];
    }
    
    cin >> m >> k;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=k; j++)
            cin >> b[i][j];
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            for(int k=1; k<=m; k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
