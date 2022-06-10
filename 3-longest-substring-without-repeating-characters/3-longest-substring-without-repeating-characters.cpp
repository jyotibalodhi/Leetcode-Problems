class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        
        int n=s.length();
        
       int len=0;
        
        int l=0,r=0;
        
        while(r<n){
            if(umap.find(s[r]) != umap.end()){
                l= max(umap[s[r]]+1, l);
            }
            umap[s[r]]=r;
            
            len= max(len, r-l+1);
            r++;
        }
        
        return len;
    }
};