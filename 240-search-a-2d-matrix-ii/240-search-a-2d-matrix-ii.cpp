class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        //Binary Search approach as every row and column are sorted
        int m = mat.size();
        int n = mat[0].size();
        
        
        for(int i=0;i<m;i++){
            if(mat[i][0] > target || mat[i][n-1] <target) continue;
            
            int l =0, h= n-1;
            vector<int> row = mat[i];
            
            while(l<=h){
                int m = l+(h-l)/2;
                
                if(row[m] == target) 
                    return true;
                else if(row[m] < target)
                    l = m+1;
                else
                    h= m-1;
            }
        }
        
        return false;
    }
};