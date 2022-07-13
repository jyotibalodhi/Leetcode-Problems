class Solution {
public:
    int solve( vector<int> &nums, int target,int ind,vector<vector<int>> &dp){
        if(ind < 0) return 0;

        if(target ==0) return 1;
                
        if(ind == 0){
            if(nums[0] == target) return 1;
            return 0;
        }
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        int take = 0;
        if(target >= nums[ind])
            take = solve(nums, target - nums[ind], ind-1,dp);
        
        int notTake = solve( nums, target, ind-1,dp);
        
        return dp[ind][target] = take | notTake;
        
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        
        int total =0;
        
        for(int i=0;i<n;i++) total += nums[i];   
        
        if(total %2 ==1 ) return false;  // odd sum cannot be divided into two equal subsets
        
        total = total/2;

        vector<vector<int>> dp(n+1, vector<int>(total+1,-1));
                 
        if(solve(nums,total,n-1,dp)) return true;
        return false;
    }
};