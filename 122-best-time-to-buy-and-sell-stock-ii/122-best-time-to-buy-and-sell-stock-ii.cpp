class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = INT_MAX;
        int pro =0;
        int maxPro = 0;
        
        for(int i=0;i<prices.size();i++){
            mini = min(mini, prices[i]);
            pro = max(pro, prices[i]-mini);
            
            if( pro>0 ){
                maxPro += pro;
                mini = prices[i];
                pro = -1;
            }
        }
        
        return maxPro;
        
    }
};