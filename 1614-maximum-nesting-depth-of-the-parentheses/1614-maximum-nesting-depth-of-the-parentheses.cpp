class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int depth=0, max_depth=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') {
                stk.push(s[i]);
                depth++;
            }
            else if(s[i]==')'){
                stk.pop();
                depth--;
            }
            if(depth> max_depth){
                max_depth =depth;
            }
           
        }
        
        return max_depth;
    }
};