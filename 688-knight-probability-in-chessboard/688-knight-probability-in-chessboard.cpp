class Solution {
public:
    
    vector<int> dx = {-2, -2, -1, 1, 2, 2, 1, -1};
    
    vector<int> dy = {-1, 1, 2, 2, 1, -1, -2, -2};
    
    double solve(int maxi, int i, int j, int n ,vector<vector<vector<double>>> &dp){

        if(i<0 || j<0 || i>=n || j>=n) return 0;

        if(maxi <=0) {
            return 1;
        } 
        
        if(dp[i][j][maxi] != -1) return dp[i][j][maxi];
        
         double ans = 0;
        
        for(int k = 0; k < 8; k++)
        {
            int new_row = i + dx[k];
            
            int new_col = j + dy[k];
            
            ans += solve(maxi -1, new_row, new_col, n,dp);
        }
        
       
        return dp[i][j][maxi] = ans / 8.0;
    }
    double knightProbability(int n, int k, int r, int c) {
        
         vector<vector<vector<double>>> dp(n, vector<vector<double>>(n, vector<double>(k+1,-1)));
        return solve(k,r,c,n,dp);
    }
};