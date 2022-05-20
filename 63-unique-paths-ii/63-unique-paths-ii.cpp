class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int m = obs.size();
        int n= obs[0].size();
        
        vector<vector<long long int>> dp(m, vector<long long int> (n,0));
        
        if(obs[0][0]==1 || obs[m-1][n-1]==1) return 0;
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(obs[i][j]==0){
                    if(i==m-1 && j==n-1){
                        dp[i][j]=1;
                    }
                    else if(i==m-1)
                        dp[i][j]=dp[i][j+1];
                    else if(j==n-1)
                        dp[i][j]=dp[i+1][j];
                    else{
                        dp[i][j]= dp[i+1][j]+ dp[i][j+1];
                    }
                }
            }
        }
        
        return dp[0][0];
    }
};