class Solution {
public:
    
    int findPath(int i, int j, int m, int n, vector<vector<int>> &dp, vector<vector<int>> obs){
        if(i==m-1 && j==n-1){
            return 1 ;
        }
        if(i>=m || j>=n) return 0;
        
        if(obs[i][j]==1) return 0;
        
        if(dp[i][j] != -1)  return dp[i][j];
        
        else return dp[i][j]= findPath(i+1,j,m,n,dp,obs) + findPath(i,j+1,m,n,dp,obs);
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
    int m = obs.size();
        int n = obs[0].size();
       vector<vector<int>> dp(m, vector<int> (n,-1));
        
        
        if(obs[0][0]==1 || obs[m-1][n-1]==1) return 0;
        int num = findPath(0,0,m,n,dp,obs);
        if(m==1 && n==1) return num;
        
        return dp[0][0];
    }
};