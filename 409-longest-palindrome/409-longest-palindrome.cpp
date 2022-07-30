class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> mp;
        int len=0;
        int cnt=0;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==2){
                len += 2;
                mp[s[i]] -=2;
            }
            cnt++;
        }
        
        if(len < cnt) //can add one more middle element
            len++;
        
        return len;
    }
};