class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> mp;
        
        int i =0;
        int j =0;
        
        int n = s.length();
        
        int len =0;
        
        while(j < n){
            
            if(mp.find(s[j]) != mp.end())   // already present in the substring
            {
                i = max(i, mp[s[j]]+1);
            }            
            
            mp[s[j]] = j;
            len = max(len, j-i+1);
            j++;
        }
        
        return len;
    }
};