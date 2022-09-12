class Solution {
public:
    
    int solve(vector<int> &nums, int i, vector<int> &dp){
        
        if(i<0){
            return 0;
        }
        
        if(i==0){
            return dp[i] = nums[i];
        }
        
        if(dp[i] != -1){
            return dp[i];
        }
        
        int take = nums[i] + solve(nums,i-2,dp);
        
        int notTake = 0 + solve(nums, i-1,dp);
        
        return dp[i] = max(take, notTake);
    }
    
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n,-1);
        
        return solve(nums,n-1,dp);
        
    }
};