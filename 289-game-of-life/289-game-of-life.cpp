class Solution {
public:
    
    int countNeighbors(vector<vector<int>>& board, int i, int j, int m, int n) {
        int count = 0;
        
        for (int I = max(i-1, 0); I < min(i + 2, m); ++I)
            for (int J = max(j - 1, 0); J < min(j + 2, n); ++J) {
                if(i == I && j == J) continue;
                
                if(board[I][J] == 1 || board[I][J] == 2)
                    count++;
            }
                 
        return count;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
       int m = board.size();
	int n = board[0].size();
        
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
            
			int ln = countNeighbors(board, i, j, m, n);
			if(board[i][j] == 0) {
				
				if(ln == 3) {
					board[i][j] = 3; 
				}
			}
			else if(board[i][j] == 1) {
			
				if(ln < 2 || ln > 3) {
					board[i][j] = 2; 
				}
			}
		}
	}

	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			board[i][j] = board[i][j]%2;
		}
	}
}
};