class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p=0;
        int n= matrix[0].size();
        int m= matrix.size();
        
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][0]>target && i!=0){
                p=i-1;
                break;
            }
            else if(matrix[i][0]==target){
                return true;
            }
            else if(matrix[0][0]>target){
                return false;
            }
            else if(matrix[m-1][n-1]<target){
                return false;
            }
            else if( matrix[m-1][0]<target){
                p=m-1;
            }
            
        }

  
        
        if(matrix[p][n-1]< target){return false;}
        
        for(int j=0; j<n;j++){
            if(matrix[p][j]==target){
                return true;
            }
        }
        return false;
        
    }
};