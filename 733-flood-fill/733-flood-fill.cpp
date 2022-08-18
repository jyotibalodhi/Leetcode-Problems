class Solution {
public:
    void solve(vector<vector<int>>& image, int i, int j, int prevCol, int newCol){
        
        if(i <0 || i>=image.size() || j<0 || j>= image[0].size()){
            return;
        }
        
        if(image[i][j] == prevCol){
            image[i][j] = newCol;
        
            solve(image, i+1,j,prevCol, newCol);  // down
            solve(image, i,j+1,prevCol, newCol);  // right
            solve(image, i-1,j,prevCol, newCol);  // up
            solve(image, i,j-1,prevCol, newCol);  // left
        }
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int col = image[sr][sc];
        if(color == col)   // no change needed
            return image;
        
        solve(image, sr,sc,col, color);
        return image;
    }
};