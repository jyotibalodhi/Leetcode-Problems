class Solution {
      
    void solve(vector<string> &board, vector<int> lr, vector<int> ud, vector<int> ld, int col, int n,int &cnt){
        
        
        if(col==n){
            cnt++;
            return ;
        }
        
        for(int row=0;row<n;row++){
            if(lr[row] ==0 && ud[row+col] ==0 && ld[n-1+col-row]==0){
                lr[row]=1;
                ud[row+col] =1;
                ld[n-1+col-row]=1;
                board[row][col]='Q';
                
                solve(board, lr, ud,ld,col+1,n,cnt);
                
                 lr[row]=0;
                ud[row+col] =0;
                ld[n-1+col-row]=0;
                board[row][col]='.';
            }
        }
    }
    
public:
    int totalNQueens(int n) {
          
        string s(n,'.');
        vector<string> board(n,s);
        
        
        vector<int> lr(n,0);  // left row
        vector<int> ud(2*n-1,0); // upper diagonal
        vector<int> ld(2*n-1,0); //lower diagonal

        int ans=0;
        solve(board, lr, ud,ld,0,n,ans);
        return ans;
    }
};