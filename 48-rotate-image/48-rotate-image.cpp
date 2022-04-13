class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n= mat.size();
        int size= pow(n,2);
        vector<int> val(size);
        
        int k=0;
        
        for( int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                val[k++] = mat[i][j];
            }
        }
        
        k=0;
          for( int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                mat[j][i]=val[k++];
            }
        }
    }
};