class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        // TC:- O(n)   SC:- O(n)
        
        int n = s.length();
        
        unordered_map<char,int> mp;
        
        int l =0;
        int r =0;
        int len =0;
        
        while(r < n){
            if(mp.find(s[r]) != mp.end())
            {
                l = max(l, mp[s[r]]+1);
            }
            
            len = max(len, r-l+1);
            mp[s[r]] = r;
            r++;
            
        }
        
        return len;
    }
};