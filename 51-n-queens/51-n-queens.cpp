class Solution {
public:
    
    void solve(int n, vector<vector<string>> &ans, vector<string> b, vector<int> left, vector<int> upperD,vector<int> lowerD,int col){
        if(col==n){
            ans.push_back(b);
            return;
        }    
        
        for(int r=0;r<n;r++){
            if(left[r]==0 && upperD[n-1+col-r]==0 && lowerD[r + col]==0){
                b[r][col]='Q';
                left[r]=1;
                upperD[n-1+col-r]=1;
                lowerD[r + col]=1;
                
                solve(n,ans,b,left,upperD,lowerD,col+1);
                
                b[r][col]='.';
                left[r]=0;
                upperD[n-1+col-r]=0;
                lowerD[r + col]=0;
                
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        
        string s(n,'.');
        vector<string> board(n,s);
        
        vector<int> left(n,0);
        vector<int> upperD(2*n-1,0);
        vector<int> lowerD(2*n-1,0);
        
        solve(n,ans,board,left,upperD,lowerD,0);
        
        return ans;

    }
};