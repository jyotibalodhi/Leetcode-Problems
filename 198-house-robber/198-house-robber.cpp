class Solution {
public:
    int solve(vector<int> &nums, int ind, vector<int> &dp){
        
        if(ind == 0)  // definitely nums[1] is not picked so include nums[0] as it                         // is always +ve and increase the max
        {
            return nums[ind];
        }
        
        if(ind < 0)  // nums[1] was picked
            return 0;
        
        
        if(dp[ind] != -1) return dp[ind];
        
        //as adjacent houses cannot be taken therefore with ith house only take i-2
        int rob = nums[ind] + solve(nums, ind-2, dp); 
        
        
        // as house i is not taken we can take the adjacent house
        int notRob = solve(nums, ind-1, dp);
        
        return dp[ind] = max(rob, notRob);
    }
    
    int rob(vector<int>& nums) {
        int n= nums.size();
        
        vector<int> dp(n+1, -1);
        
        return solve(nums, n-1, dp);
    }
};