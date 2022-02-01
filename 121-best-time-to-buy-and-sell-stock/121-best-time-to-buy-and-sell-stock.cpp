class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro =0, mn= INT_MAX;
        
        for(int i=0; i< prices.size(); i++){
            mn = min(mn, prices[i]);
            max_pro = max(max_pro, prices[i]-mn);
        }
        
        return max_pro;
    }
};
