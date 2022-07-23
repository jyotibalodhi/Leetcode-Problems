class Solution {
public:
   bool  solve(int idx , string s, unordered_set<string> &st ,vector<int> &dp)
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
             
             if(st.find(str)!=st.end())
             {
                if(solve(i+1,s,st,dp))
                    return dp[idx]= true;
             }
        }
         return dp[idx]=false;

   }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> st;
        vector<int> dp(s.size(),-1);
        
        for(auto x: wordDict)  
        {
            st.insert(x);
        }    
        return solve(0,s,st,dp);
    }
};