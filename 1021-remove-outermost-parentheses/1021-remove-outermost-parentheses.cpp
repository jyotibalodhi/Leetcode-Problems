class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        stack<char> stk;
        
        for(auto i: s){
            if(i=='('){
                if(stk.empty())
                    stk.push(i);
                else
                {
                    stk.push(i);
                    res+=i;
                }
            }
            else{
                stk.pop();
                if(stk.empty())
                    continue;
                else{
                    res+=i;
                }
            }
        }
        
        return res;
    }
};