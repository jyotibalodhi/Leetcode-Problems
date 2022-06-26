class Solution {
public:
    
    int maxScore(vector<int>& cp, int k) {
        
       int res=0;
       int sum=0;
        
        int n = cp.size();
        
        for(int i=0;i<k;i++){
            sum += cp[i];
        }
        
        res = sum;
        
        for(int i=0;i<k;i++){
             sum -= cp[k-1-i];
            sum += cp[n-1-i];
            
            res = max(res,sum);
        }
        
        return res;
    }
};