class Solution {
public:
    int solve(string &s, int ind, vector<int> &dp){
        
        if(ind >= s.length())     //possible solution
            return 1;
        else if(s[ind] == '0')
            return 0;
        else if(ind == s.length()-1)
            return 1;
        
        
        if(dp[ind] != -1)
            return dp[ind];
        
        if(s[ind] == '1' || (s[ind] == '2' && (s[ind+1] -'0' >= 0 && s[ind+1] -'0' <= 6)))
            return dp[ind] = solve(s,ind+1,dp) + solve(s,ind+2,dp);
        
        
            return dp[ind] = solve(s,ind+1,dp);
    }
    
    int numDecodings(string str) {
        
        int n = str.length();
        
        vector<int> dp(n+1,-1);
        return solve(str,0,dp);

    }
};