class Solution {
public:
    int solve( vector<int> &dp, int i){
        
        if(i==0){
            return 1;
        }
        
        
        if(dp[i] != -1)
            return dp[i];
        
        int one =0, two =0;
        
        if(i>0)
            one  = solve(dp,i-1);
        if(i>1)
            two = solve(dp,i-2);
        
        return dp[i] = one + two;
            
        
        
    }
    
    int climbStairs(int n) {
        
        vector<int> dp(n+1,-1);
        
        return solve(dp,n);
        
    }
};