class Solution {
public:
    
    string lcs(string s, string t){
        if(s == t)
            return s;
        
        int i=0;
        int j=0;
        
        while(i <s.length() & j<t.length()){
            if(s[i] != t[j])
                break;
            
            i++;
            j++;
        }
        
        return s.substr(0,i);       
    }
    
    
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];
        int n = strs.size();
        
        for(int i=1;i<n;i++){
            prefix = lcs(strs[i],prefix);
        }
        
        return prefix;
    }
};