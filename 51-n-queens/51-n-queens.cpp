class Solution {
public:
    
//     bool isSafe(vector<string> &board,int r, int c, int n){
        
//         for(int i=0;i<c;i++){
//             if(board[r][i] == 'Q')   //queen in same row
//                 return false;
//         }
        
//         int i =r,j=c;
//         //upper diagonal
//         while(i>=0 && j>=0){
//             if(board[i][j] =='Q')
//                 return false;
//             i--;
//             j--;
//         }
        
//         i=r,j=c;
        
//         //lower diagonal
        
//         while(i<n && j>=0){
//             if(board[i][j] =='Q')
//                 return false;
//             i++;
//             j--;
//         }
        
//         return true;
//     }
    
    void solve(vector<string>&board, vector<vector<string>> &ans, int n, int col,vector<int> &lr, vector<int> &ud, vector<int> &ld){
        
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row =0; row<n ; row++){
            // if(isSafe(board,row,col,n)){
            if(lr[row] ==0 && ud[row+col]==0 && ld[n-1+col-row]==0){
                board[row][col] = 'Q';
                lr[row] =1;
                ud[row+col] =1;
                ld[n-1+col-row] =1;
                solve(board,ans,n,col+1,lr,ud,ld);
                lr[row] =0;
                ud[row+col] =0;
                ld[n-1+col-row] =0;
                board[row][col] ='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        string s(n,'.');
        
        vector<string> board(n,s);
        
        vector<int> lR(n,0),uD(2*n -1,0),lD(2*n -1,0);
        
        solve(board,ans,n,0,lR,uD,lD);
        return ans;
    }
};