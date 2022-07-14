class Solution {
public:
        
int solve(vector<int> &nums, int x, int i, vector<vector<int>> &dp){
        if(i<0)  return 0;      
    
        if(x==0) return 1;
        if(i==0){
            if(x % nums[i] == 0) return 1;
            return 0;
        }

        if(dp[i][x] !=-1) return dp[i][x];

        int take = 0;
        if(x>= nums[i]){
            take = solve(nums, x - nums[i], i ,dp);
        }
        int notTake = solve(nums, x, i-1,dp );

        return dp[i][x]= take + notTake;
}

    
    int change(int x, vector<int>& nums) {
          
        int n = nums.size();
        
        vector<vector<int>> dp(n,vector<int>(x+1,-1));
        
        return solve(nums,x,n-1,dp);
        
    }
};