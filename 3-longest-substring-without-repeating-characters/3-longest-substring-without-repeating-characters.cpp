class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> mp;
        
        int n = s.length();
        
        int i =0;
        int j =0;
        int len = 0;
        
        while(j < n){
            
            mp[s[j]]++;

            if(mp.size() == j-i+1){     // map size == window size means all unique char
                len = max(len,j-i+1);
            }
            else{
                while(mp.size() < j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        
        return len;
    }
};