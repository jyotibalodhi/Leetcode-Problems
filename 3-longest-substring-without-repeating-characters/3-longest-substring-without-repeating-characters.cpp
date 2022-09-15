class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        
        if(n <=1)
            return n;
        
        int l =0;
        int r =0;
        
        unordered_map<char,int> mp;   //char, index map
        int len =0;

        while(r<n){
            if(mp.find(s[r]) != mp.end()){
                l = max(l,mp[s[r]]+1);              
            }
            
            mp[s[r]] =r;
            len = max(len, r-l+1);
            r++;
        }
        
        return len;
    }
};