class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        stack<int> stk1;
        stack<int> stk2;
        // vector<int> res={0};
        for(int i=p.size()-1;i>=0;i--){
            stk1.push(p[i]);
        }
        int i=0;
        while(!stk1.empty()){
            int val =stk1.top();
            stk1.pop();
            if(stk1.empty()){
                p[i] =val;
                break;
            }
            if(val>=stk1.top()){
                p[i]=val-stk1.top();
                i++;
            }
            else{
                while (!stk1.empty()&& stk1.top() >val){
                    int temp=stk1.top();
                    stk1.pop();
                    stk2.push(temp);
                }
                if(stk1.empty()){
                    p[i]=val;
                    i++;
                }
                else if(stk1.top()<=val){
                    p[i]=val-stk1.top();
                    i++;
                }
                
                while(!stk2.empty()){
                    int temp=stk2.top();
                    stk2.pop();
                    stk1.push(temp);
                }
            }
        }
        
        return p;
    }
};