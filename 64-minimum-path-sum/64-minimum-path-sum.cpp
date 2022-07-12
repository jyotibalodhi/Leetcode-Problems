class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
        
        //Space optimized
        // Time Complexity :- O(m*n)
        //Space Complexity :- O(n)
        
        int m = grid.size();
        int n = grid[0].size();
        
        if(m==1 && n==1) return grid[0][0];


        vector<int> prev(n,0);   // prev row
        
        for(int i=0;i<m;i++){
            vector<int> curr(n,0);   // curr row
            
            for(int j=0;j<n;j++){
                if(i==0 && j==0) curr = grid[0];
                else{
                    int down = 1e6;
                    int right = 1e6;
                    
                    if(i>0) 
                        down = grid[i][j] + prev[j];
                    
                     if(j>0) 
                        right = grid[i][j] + curr[j-1];
                    
                   curr[j] = min(down, right);
                }
            }
            prev = curr;
        }
        return prev[n-1];
    }
};