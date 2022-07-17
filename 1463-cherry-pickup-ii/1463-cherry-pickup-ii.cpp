class Solution {
public:
    
int f(int i,int j1,int j2,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp){ 
    
        if(j1<0 || j1>=grid[0].size() || j2<0 || j2>=grid[0].size()) return -1e8l;

        if(i==grid.size()-1){
            if(j1!=j2) return grid[i][j1]+grid[i][j2];
            return grid[i][j1];
        }

        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi=INT_MIN;

        for(int cj1=-1;cj1<2;cj1++){
            for(int cj2=-1;cj2<2;cj2++){
                if(j1!=j2) maxi=max(maxi,grid[i][j1]+grid[i][j2]+ f(i+1,j1+cj1,j2+cj2,grid,dp));

                else maxi=max(maxi,grid[i][j1]+f(i+1,j1+cj1,j2+cj2,grid,dp));
            }
        }
        return dp[i][j1][j2]=maxi;
}

    
    int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size();
        int c  = grid[0].size();
        
        vector<vector<vector<int>>> dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    
        return f(0,0,c-1,grid,dp);
        
    }
};