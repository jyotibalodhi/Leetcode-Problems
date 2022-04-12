class Solution {
public:
    int maxProfit(vector<int>& p) {
        int pro=0;
        int minVal=INT_MAX;
        
        for(int i=0;i<p.size();i++){
            minVal =min(minVal,p[i]);
            pro= max(pro, p[i]-minVal);
        }
        
        return pro;
    }
};