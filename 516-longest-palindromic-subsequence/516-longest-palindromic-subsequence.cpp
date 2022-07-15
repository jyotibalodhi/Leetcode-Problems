class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t =s;
        reverse(t.begin(),t.end());
        
        int  m = s.length();

        vector<int> prev(m+1,0), curr(m+1,0);

        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                
                if(s[i-1]== t[j-1]){
                    curr[j] = 1+ prev[j-1];
                }
                else
                    curr[j] = max(prev[j], curr[j-1]);
            }
            prev = curr;
        }
        
        return prev[m];
    }
};