class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        vector<int> v(256,-1);
        vector<bool> used(256,false);
        
        if(s == t) return true;
        for(int i=0;i<s.length();i++){
            if(v[t[i]] == -1 && !used[s[i]]){
                v[t[i]] = s[i]; used[s[i]] = true; }
            else if(v[t[i]] == -1 && used[s[i]]) return false;
            else if(v[t[i]] > -1 && v[t[i]] != s[i]) return false;
        }
        return true;
    }
};