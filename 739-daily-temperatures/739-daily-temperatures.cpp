class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n=temp.size();
        
        vector<int> res(n,0);
        stack<pair<int,int>> stk;
        
        for(int i=0;i<n;i++){
            
            while(!stk.empty() && stk.top().first < temp[i]){
                int val= stk.top().second;
                res[val] = i - val;
                stk.pop();
            }
            
            stk.push({temp[i],i});
        }
        
        return res;
    }
};