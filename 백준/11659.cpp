#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n,m;
int sum[100005];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    
    int num;
    sum[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> num;
        sum[i] = sum[i-1] + num;
    }
    
    int x,y;
    for(int i=1; i<=m; i++){
        cin >> x >> y;
        int ans = sum[y] - sum[x-1];
        
        cout << ans << endl;
    }
    
    return 0;
}
