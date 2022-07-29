class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        for(string s : words){
           
            if(s.size()!=pattern.size())continue;
           
            unordered_map<char,char> hm;
            bool flag1 = true,flag2 = true;
            
            for(int j = 0;j<s.size();j++){       
                char a = s[j];
                char b = pattern[j];
              
                if(hm.count(a)==0 ||hm[a]== b) {
                    hm[a] = b;
                }
                else{
                   flag1 = false;
                    break;
                } }
            
                hm.clear();
                  for(int j = 0;j<s.size();j++){  
                char b = s[j];                     
                char a = pattern[j];
              
                 if(hm.count(a)==0 ||hm[a]== b) {
                    hm[a] = b;
                }
                else{
                   flag1 = false;
                    break;
                } }
            
            
            if(flag1 && flag2){                    
                ans.push_back(s);
            }
            
        }
        
        return ans;
    }
};