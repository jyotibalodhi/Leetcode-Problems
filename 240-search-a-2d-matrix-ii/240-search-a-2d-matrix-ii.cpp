class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        //Binary Search approach as every row and column are sorted
         int m = mat.size();
        int n = mat[0].size();
        
        int i = m - 1;
        int j = 0;
        
        while (i>=0 && j<n){
            
            if (mat[i][j] == target) return true;
            
            else if (mat[i][j] < target) j++;
            
            else i--;
        }
        return false;
        
    }
};