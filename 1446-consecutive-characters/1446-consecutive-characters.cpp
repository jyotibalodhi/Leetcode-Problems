class Solution {
public:
    int maxPower(string s) {
        int len=1, maxlen=1;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]) len++;
            else len=1;
            
            maxlen = max(len, maxlen);
        }
        
        return maxlen;
    }
};