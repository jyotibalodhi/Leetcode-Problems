class Solution {
public:
    
   int solve(int ind, vector<int> &c, vector<int> &dp){
      if(ind >=c.size()) return 0;
        
        if(dp[ind] != -1) return dp[ind];
        
        int one = solve(ind+1, c, dp) + c[ind];
        int two = solve(ind+2, c, dp) + c[ind];

        return dp[ind] = min(one, two);
}
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        
        vector<int> dp(n+1,-1);
        
        return min(solve(0,cost,dp), solve(1, cost, dp));
    }
};