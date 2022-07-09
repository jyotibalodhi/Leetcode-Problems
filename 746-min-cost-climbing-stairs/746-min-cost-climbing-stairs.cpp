class Solution {
public:
  
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        
        vector<int> dp(n+1,-1);
        
        dp[0]=0;
        dp[1]=0;
        
        for(int i=2; i<=n;i++){
            
            int first = dp[i-1] + cost[i-1];
            int second = dp[i-2] + cost[i-2];
            
            dp[i] = min(first, second);
        }
        
        return dp[n];
    }
};