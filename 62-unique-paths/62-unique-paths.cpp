class Solution {
public:

    int uniquePaths(int m, int n) {
        if(m==1 && n==1) return 1;
        
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[i][j] =1;
                else{
                    
                    int left =0;
                    if(j>0)
                        left = dp[i][j-1];
                    int up =0;
                    if(i >0)
                        up = dp[i-1][j];
                    
                    dp[i][j] = up +left;
                }
            }
        }
        
        
        return dp[m-1][n-1];
        
//         int N = m+n -2;    
//         int r = min(m-1,n-1);
        
//         double res =1.0;
//         for(int i=1;i<=r;i++){
//             res = res *(N+i-r)/i;
//         }
        
//         return (int)res;
        
    }
};