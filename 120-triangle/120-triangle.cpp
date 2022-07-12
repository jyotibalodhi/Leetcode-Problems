class Solution {
public:  
    
	int minimumTotal(vector<vector<int>>& tri) {
        
    int n = tri.size();
        
	// vector<vector<int>> dp(n, vector<int>(n,0));
    
        
        //base case Tabulation: n-1 ---> 0
        
        vector<int> prev(n,0);
        
        for(int j=0;j<n;j++){
            prev[j] = tri[n-1][j];
        }
        
        for( int i=n-2;i>=0;i--){
            vector<int> curr(i+1,0);
            
            for(int j=i;j>=0;j--){ 
                
                   int bottom = tri[i][j] + prev[j];
                   int bottomRight = tri[i][j] + prev[j+1];
                    
                    curr[j] = min(bottom, bottomRight);
                }
            prev = curr;
        }
    return prev[0];
        
        
	}
};