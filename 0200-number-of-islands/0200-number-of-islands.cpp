class Solution {
public:
    
    int dx[4] = {0,-1,0,1};
    int dy[4] = {-1,0,1,0};
    
    void dfs(vector<vector<char>> &grid, int i, int j){
        
        if(i <0 || j<0 || i>= grid.size() || j >= grid[0].size()){
            return;
        }
        
        if(grid[i][j] == '1'){
            
            grid[i][j] = '0';       // visited
            
            for(int k =0;k<4;k++){
                int x = i + dx[k];
                int y = j + dy[k];
                
                dfs(grid, x, y);
            }            
        }           
    }
    int numIslands(vector<vector<char>>& grid) {        
        
        // Number of components
        // TC:- O(4^(m*n))
        // SC:- O(1)
        
        int island =0;
        
        for(int i=0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){                    
                    island++;
                    dfs(grid,i,j);
                }
            }
        }
        
        return island;
    }
};