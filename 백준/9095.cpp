#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, num;
int dp[15];

void insert(){
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i<11; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    insert();
    
    while(t--){
        cin >> num;
        cout << dp[num] << endl;
    }
    
    return 0;
}
