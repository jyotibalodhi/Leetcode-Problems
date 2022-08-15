class Solution {
public:
    int strStr(string s, string p) {
        
        int n = s.length(), m = p.length();
    
         for(int i=0;i<n-m+1;i++){
             if(s[i]== p[0]){
                string ans=s.substr(i,m);
                if(ans==p){
                    return i;
                }
             }
        }

        return -1;
    }
};