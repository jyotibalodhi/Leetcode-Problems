#define ll long long
ll mod = 1e9 +7;


class Solution {
public:
    
    int solve(int maxi, int i, int j, int m, int n ,vector<vector<vector<int>>> &dp){
        
        if(i<0 || j<0 || i>=m || j>=n) return 1;

        if(maxi ==0) {
            return 0;
        } 
        
        if(dp[i][j][maxi] != -1) return dp[i][j][maxi];
        
        int up = solve(maxi-1, i-1,j,m,n,dp);
        int down = solve(maxi-1, i+1,j,m,n,dp);
        int right = solve(maxi-1, i,j+1,m,n,dp);
        int left = solve(maxi-1, i,j-1,m,n,dp);

      return dp[i][j][maxi] = (up % mod + down % mod + left % mod + right % mod) % mod;
    }
    int findPaths(int m, int n, int maxMove, int r, int c) {
        
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove+1,-1)));
        return solve(maxMove,r,c,m,n,dp);
    }
};