class Solution {
public:
    bool isValid(string s) {
        if( s.length() % 2 != 0) return false;   // always invalid

        stack<int> stk;
        stk.push(s[0]);
        int i=0;
                       
        
        while(!stk.empty()){
            if(i< s.length()){
                for(i=1; i<s.length();i++){
                      if(s[i]=='(' || s[i]=='['|| s[i]=='{' ){
                          stk.push(s[i]);
                      }
                     else if(!stk.empty() &&
                     ( (s[i]==')'&& stk.top()=='(' )|| 
                        (s[i]==']'&& stk.top()=='[') || 
                        (s[i]=='}'&& stk.top()=='{')) ){
                         stk.pop();
                         continue;
                     }
                    else{
                    
                        return false;
                    }
                }
            }
            else{
                if(!stk.empty()) {
                    return false;
                }
            }
        }
        
     return true;
   
    }
};