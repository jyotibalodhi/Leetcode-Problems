class Solution {
public:
    int longestValidParentheses(string s) {
        int longVal=0;
        
        int n= s.length();
        
        stack<pair<char,int>> stk;
        
        for(int i=0;i<n;i++){
            
             if(s[i]=='(')
                 stk.push({'(',i}); 
            else{
                
                if(!stk.empty() && stk.top().first=='('){ 
                    
                    longVal = max(longVal, i-stk.top().second+1); 
                    stk.pop();
                          
                    if(!stk.empty()){ 
                        longVal = max(longVal,i-stk.top().second); 
                    }
                    else                            
                        longVal = max(longVal,i+1); 
                }
                else
                    stk.push({')',i}); 
            }
        }
       
        return longVal;
    }
};