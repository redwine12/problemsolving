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
ll dp[100];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=90; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << dp[n] << endl;
    
    return 0;
}
