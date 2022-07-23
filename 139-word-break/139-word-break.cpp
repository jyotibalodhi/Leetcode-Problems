class Solution {
public:
   bool  solve(int idx , string s, unordered_map<string,int> &mp ,vector<int> &dp)
        {
            if(idx==s.size())
                return true;
            
          if(dp[idx]!=-1)
          {
              return dp[idx];
          }
           string str;
            
         for(int i=idx;i<s.size();i++)   
            {
                str+=s[i]; 
             
             if(mp.find(str)!=mp.end())
             {
                if(solve(i+1,s,mp,dp))
                    return true;
             }
        }
                  return dp[idx]=false;

   }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_map<string,int> mp;
        vector<int> dp(s.size(),-1);
        
        for(auto x: wordDict)  
        {
            mp[x]++;
        }    
        return solve(0,s,mp,dp);
    }
};