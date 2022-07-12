class Solution {
public:
    int solve(vector<vector<int>>& mat, int i, int j, int n, vector<vector<int>>& dp){
        if(i<0 || j<0 || i>n-1 || j>n-1) return 1e6;

        if(i==0) return mat[i][j];
        

        if(dp[i][j] != INT_MAX) return dp[i][j];
            
            int ur = mat[i][j] + solve(mat, i-1,j+1,n, dp);  // upper right
            int u =  mat[i][j] + solve(mat, i-1,j,n, dp);    // up 
            int ul = mat[i][j] + solve(mat, i-1,j-1,n, dp);  // upper left

            return dp[i][j] = min(ul, min(u,ur));
    }
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        
        if(n==1) return mat[0][0];
        
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        vector<int> sums(n,0);
        
        for(int i=0;i<n;i++){
             sums[i] = solve(mat,n-1,n-i-1,n,dp);
        }
        
        int sum=INT_MAX;
        
         for(int i=0;i<n;i++){
             sum = min(sum, sums[i]);
        }

        return sum;
    }
};