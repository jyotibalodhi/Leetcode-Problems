class Solution {
public:
    void solve(int n, vector<string> &ans, string s, int open,int close){
        if(open ==n && close ==n){
            ans.push_back(s);
            return;
        }
        
        if(open<n){
            solve(n,ans,s+"(",open+1,close);
        }
        
        if(close <open){
            solve(n,ans,s+")",open,close+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        solve(n,ans,"",0,0);
        return ans;
    }
};