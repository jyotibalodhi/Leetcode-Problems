class Solution {
public:
    int solve(vector<int> &nums, int amount, int i, vector<vector<int>> &dp){
        
        //base case

        if(i==0){
            if(amount % nums[i] == 0)
                return amount/nums[i];
            return 1e9;
        }
        
        if(dp[i][amount] != -1)
            return dp[i][amount];
        
        int take = 1e9;
        if(nums[i] <= amount)
            take = 1 + solve(nums, amount-nums[i],i,dp);
        
        int notTake = solve(nums, amount, i-1, dp);
        
        return dp[i][amount] = min(take,notTake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<vector<int>> dp(n+1, vector<int> (amount+1,-1));
        
        int ans = solve(coins, amount, n-1,dp);
        if(ans >= 1e9)
            return -1;
        return ans;
    }
};