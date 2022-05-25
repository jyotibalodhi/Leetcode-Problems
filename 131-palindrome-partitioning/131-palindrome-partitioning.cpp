class Solution {
public:
    
    bool isPallindrome(string s, int start, int end){
        while(start <=end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
    
    void solve(string s,vector<vector<string>> &ans, vector<string> &str, int ind){
        
        if(ind == s.length()){
            ans.push_back(str);
            return;
        }
        
        for(int i=ind;i<s.length();i++){
            if(isPallindrome(s,ind,i)){
                str.push_back(s.substr(ind, i-ind+1));
                solve(s,ans,str,i+1);
                str.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        
        solve(s, ans,str,0);
        
        return ans;
    }
};