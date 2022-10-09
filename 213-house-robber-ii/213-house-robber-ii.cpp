class Solution {
public:
    
    int solve(vector<int> &nums, int i,int n, vector<int> &dp){
        
        
        // base cases
        
        if(i > n){
            return 0;
        }
        
        if(i == n){
            return dp[i] = nums[i];
        }
        
        if(dp[i] != -1)
            return dp[i];
        
        int take = nums[i] + solve(nums,i+2,n,dp);
        
        int notTake =  0 + solve(nums,i+1,n,dp);
        
        return dp[i] = max(take,notTake);
    }
    
    int rob(vector<int>& nums) {
           
        // two starting points 0,1
        // TC:- O(n) SC:- O(2n)
        int n = nums.size();
        if(n==1)
            return nums[0];
        
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        
        return max(solve(nums,0,n-2,dp1), solve(nums,1,n-1,dp2));
    }
};