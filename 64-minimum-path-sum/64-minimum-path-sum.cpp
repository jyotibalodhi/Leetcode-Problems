class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        if(m==1 && n==1) return grid[0][0];
        
        vector<vector<int>> dp(m, vector<int>(n,-1));

        dp[0][0] = grid[0][0];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[0][0] = grid[0][0];
                else{
                    int down = 1e6;
                    int right = 1e6;
                    
                    if(i>0) 
                        down = grid[i][j] + dp[i-1][j];
                    
                     if(j>0) 
                        right = grid[i][j] + dp[i][j-1];
                    
                    dp[i][j] = min(down, right);
                }
            }
        }
        return dp[m-1][n-1];
    }
};