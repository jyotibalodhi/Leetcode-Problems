class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) return false;
        
        
        unordered_map<char,int> m;
        
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(m.find(t[i]) == m.end() || m[t[i]] <= 0) //not found in hashmap
                return false;
            
            m[t[i]]--;
        }
        
        return true;
    }
};