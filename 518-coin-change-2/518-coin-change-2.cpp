class Solution {
public:
    
    int change(int x, vector<int>& nums) {
          
        int n = nums.size();
        
        vector<vector<int>> dp(n,vector<int>(x+1,0));
        
        for(int i=0;i<=x;i++){
            if( i%nums[0]==0) 
                dp[0][i] = 1;
        }

        
        for(int i=1;i<n;i++){
            for(int j=0;j<=x;j++){
                int take = 0;
                
                if(j>= nums[i]){
                    take = dp[i][j- nums[i]];
                }
                int notTake = dp[i-1][j];

                dp[i][j]= take + notTake;
            }
        }
        
        return dp[n-1][x];
        
    }
};