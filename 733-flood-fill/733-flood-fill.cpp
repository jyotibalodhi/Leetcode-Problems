class Solution {
public:
   void dfs(vector<vector<int>>& image, int i, int j, int color, int parColor) {
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size()) return;
        if(image[i][j]==parColor) {
            image[i][j]=color;
            
            vector<vector<int>> dir ={{1,0},{0,1},{-1,0},{0,-1}};
            
            for(int k=0;k<4;k++){
                dfs(image, dir[k][0] +i , dir[k][1] + j, color, parColor);
            }
        }
        return;
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};