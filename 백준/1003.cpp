#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll dp[41];
int t, n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=40; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 0)
            cout << "1 0" << endl;
        else
            cout << dp[n-1] << " " << dp[n] << endl;
    }
    
    return 0;
}
