class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        int m=mat.size();
        int n=mat[0].size();
        
        int size = m*n;
        vector<int> res(size);
        
        int r1=0, c1=0;
        int r2=m-1, c2=n-1;
        
        int k=0;
        while(r1<=r2 && c1<=c2){
            //left to right
            for(int i=c1;i<=c2;i++){
               res[k++]= mat[r1][i];
            }
            
            //top to bottom
             for(int i=r1+1;i<=r2;i++){
               res[k++]= mat[i][c2];
            }
            
            if(r1<r2 && c1<c2){
                
            //right to left
             for(int i=c2-1;i>c1;i--){
               res[k++]= mat[r2][i];
            }
                
              //bottom to up
             for(int i=r2;i>r1;i--){
               res[k++]= mat[i][c1];
            }
                
            }
            
            r1++;
            r2--;
            c1++;
            c2--;
        }
        
        return res;
    }
};