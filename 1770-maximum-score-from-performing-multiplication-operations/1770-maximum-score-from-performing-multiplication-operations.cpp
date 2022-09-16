class Solution {
public:
    int solve(vector<int> &nums, vector<int> &mul,int s, int e, int k,vector<vector<int>> &dp){
        if(s > e)
            return 0;
        if(k >= mul.size())
            return 0;
        
        if(dp[s][k] != INT_MIN)
            return dp[s][k];
        
        int front = (mul[k]*nums[s] ) + solve(nums,mul,s+1,e,k+1,dp);
        int back = (mul[k]*nums[e]) + solve(nums,mul,s,e-1,k+1,dp);
        
        return dp[s][k] = max(front,back);
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        
        int n = nums.size();
        int m = mul.size();
        
        vector<vector<int>> dp(m+1,vector<int> (m+1,INT_MIN));
        

        return solve(nums, mul,0,n-1,0,dp);       
    }
};