class Solution {
public:
    int longestCommonSubsequence(string str1, string str2) {
        int dp[1001][1001];
        
        // for(int i=0; i<1001; i++){
        //     dp[i][0] = 0;
        //     dp[0][i] = 0;
        // }

        
        for(int i=1; i<=str1.size(); i++){
            for(int j=1; j<=str2.size(); j++){
                if(str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        return dp[str1.size()][str2.size()];
    }
};
