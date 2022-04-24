class SubrectangleQueries {
public:
    vector<vector<int>> mat;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        mat =rectangle;
    }
    
    void updateSubrectangle(int r1, int c1, int r2, int c2, int val) {
        int n= mat.size();
        int m =mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>=r1 && i<=r2){
                    if(j>=c1 && j<=c2){
                        mat[i][j]=val;
                    }
                }
            }
        }
    }
    
    int getValue(int row, int col) {
        return mat[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */