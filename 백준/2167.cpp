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

    int n,m,t, i, j , x, y;
    int arr[301][301];
    cin >> n >> m;
    for(int k=1; k<=n; k++){
        for(int l=1; l<=m; l++)
            cin >> arr[k][l];
    }
    
    cin >> t;
    while(t--){
        cin >> i >> j >> x >> y;
        int sum = 0;
        
        for(int a=i; a<=x; a++){
            for(int b=j; b<=y; b++)
                sum+=arr[a][b];
        }
        cout << sum << endl;
    }
    return 0;
}
