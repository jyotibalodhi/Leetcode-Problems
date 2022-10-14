class Solution {
public:
    
    int dx[4] = {0,-1,0,1};
    int dy[4] = {-1,0,1,0};
    
    void solve(vector<vector<int>> &img, int i, int j, int &color, int  &prev){
        
        if(i<0 || j<0 ||i >=img.size() || j>=img[0].size()){
            return;
        }
        
        if(img[i][j] == prev){
            img[i][j] = color;
        
        for(int k=0;k<4;k++){
            int nx = i + dx[k];
            int ny = j + dy[k];
            
            solve(img,nx,ny,color,prev);
        }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc] == color)
            return image;

        int prev = image[sr][sc];
        
        
        solve(image,sr,sc,color,prev);
        return image;
    }
};