class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l =0,r=0;
        
        unordered_map<char,int> mp;
        
        int res=0;
        int len =0;
        
        while(r<s.length()){
            mp[s[r]]++;
            
            len = max(len, mp[s[r]]);  //max rep char len till now
            while(r-l+1-len >k){
                mp[s[l]]--;
                l++;
            }
            
            res = max(res, r-l+1);
            r++;
        }
        
        return res;
    }
};