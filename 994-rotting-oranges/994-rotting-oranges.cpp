#define pii pair<int, int>

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        
        int m = grid.size();
        int n = grid[0].size();
        
        int total =0;       // Total oranges
        int count =0;       // Rotten oranges
        
        queue<pii> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0)
                    total++;
                if(grid[i][j] == 2){
                    count++;
                    q.push({i,j});
                }
            }
        }
        
        int time = 0;
        
        int dx[4] = {1,0,-1,0};    //right,down,left,up
        int dy[4] = {0,-1,0,1};
        
        while(!q.empty()){
            
            int k = q.size();
            
            
            while(k--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                for(int i=0;i<4;i++){     // checking all four directions
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if(nx >= 0 && ny >=0 && nx < m && ny <n){
                        if(grid[nx][ny] == 1){
                            grid[nx][ny] = 2;
                            q.push({nx,ny});
                            count++;
                        }
                    }
                }
            }
            if(!q.empty())
                time++;
        }
        
        if(total==count)
            return time;
        
        return -1;
    }
};