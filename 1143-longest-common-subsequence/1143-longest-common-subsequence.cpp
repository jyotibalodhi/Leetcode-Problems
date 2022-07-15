class Solution {
public:    
    int longestCommonSubsequence(string s, string t) {
        
        int  m = s.length();
        int n = t.length();

        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        
        //as we cannot represent -ve values as index we will shift index from 0               based to 1 based
        //now -ve is --> 0 case
        
        for(int i=0;i<=m;i++){
            dp[i][0] =0;
        }
        
         for(int i=0;i<=n;i++){
            dp[0][i] =0;
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]== t[j-1])
                    dp[i][j] = 1+ dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        return dp[m][n];
    }
};