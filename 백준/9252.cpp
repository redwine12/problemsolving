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

string str1, str2;
string ans;
int dp[1001][1001];

string lcs() {
	int i=str1.size(), j=str2.size();
	string ans;
	
	while (i>=1 && j>= 1) {
        if (dp[i][j] > dp[i - 1][j] && dp[i - 1][j] == dp[i][j - 1] && dp[i][j - 1] == dp[i - 1][j - 1]) {
            ans += str1[i - 1];
            i--;
            j--;
        }
		else if (dp[i - 1][j] > dp[i][j - 1] && dp[i - 1][j] == dp[i][j]) i--;
        else if (dp[i - 1][j] < dp[i][j - 1] && dp[i][j - 1] == dp[i][j]) j--;
        else j--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> str1 >> str2;
    
    for(int i=1; i<=str1.size(); i++){
        for(int j=1; j<=str2.size(); j++){
            if(str1[i-1] == str2[j-1]){
            	dp[i][j] = dp[i-1][j-1] + 1;
			} 
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    cout << dp[str1.size()][str2.size()] << endl;
    cout << lcs() << endl;
    return 0;
}
