class Solution {
public:
    
    bool isStuck(vector<vector<int>> &mat, int i,int j, int r, int c){
        
        if(mat[i][j]==1){
            if(j>=c-1 || mat[i][j+1]==-1)
                return true;
        }else{
            if(j<=0 || mat[i][j-1]==1)
                return true;
        }
        
        return false;
    }
    
    
    int solve(vector<vector<int>> & mat, int r, int c, int i, int j){
        
        if(i ==r){  //last row
            return j;
        }
        
        if(isStuck(mat,i,j,r,c)){
            return -1;
        }
        
        if(mat[i][j]==1){
            i++;
            j++;
        }else{
            i++;
            j--;
        }
        
        
        return solve(mat,r,c,i,j);
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        
        
        vector<int> res(c,-1);
        
        for(int i=0;i<c;i++){
          res[i] = solve(grid,r,c,0,i);
        }
        
        return res;
    }
};