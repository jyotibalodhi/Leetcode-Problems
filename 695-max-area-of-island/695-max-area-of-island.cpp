class Solution {
public:
     int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    void dfs(vector<vector<int>>& grid, int x, int y, int m, int n,int &cnt){

        if(x<0 || x>=m || y<0 || y>=n || grid[x][y]==0) return;

        grid[x][y] = 0;
        cnt++;
        for(int i=0;i<4;i++)
            dfs(grid,x+dx[i],y+dy[i],m,n,cnt);
            
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int maxi = 0;
        int cnt = 0;


        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(grid[i][j]==1){
                    dfs(grid,i,j,m,n,cnt);
                    maxi = max(maxi, cnt);
                }
               cnt =0; 
            }
        }
        return maxi;
    }
};