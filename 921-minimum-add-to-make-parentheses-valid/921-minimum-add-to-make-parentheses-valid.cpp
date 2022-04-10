class Solution {
public:
    int minAddToMakeValid(string s) {
       int count=0;
        stack<char> stk;
        
        for( int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(s[i]);
            }
            else{
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    count++;
                }
            }
        }
        
        if(!stk.empty()){
            while(!stk.empty()){
                count++;
                stk.pop();
            }
        }
        return count;
    }
};