class Solution {
public:  
    
	int minimumTotal(vector<vector<int>>& tri) {
        
    int n = tri.size();
        
	vector<vector<int>> dp(n, vector<int>(n,0));
    
        
        //base case Tabulation: n-1 ---> 0
        
        for(int j=0;j<n;j++){
            dp[n-1][j] = tri[n-1][j];
        }
        
        for( int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){ 
                
                   int bottom = tri[i][j] + dp[i+1][j];
                    int bottomRight = tri[i][j] + dp[i+1][j+1];
                    
                    dp[i][j] = min(bottom, bottomRight);
                }
        }
    return dp[0][0];
        
        
	}
};