class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> freq;
        
        int len =0;
        int n = s.size();
        
        for(int i=0;i<n;i++){
            freq[s[i]]++;

            if(freq.find(s[i]) != freq.end() && freq[s[i]] %2 ==0){
                len += 2;            
            }
            
        }
        
        if(len < n){
            len++;
        }
        
        return len;
    }
};