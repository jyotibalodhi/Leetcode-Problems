class Solution {
    
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        int n=env.size();
        
        vector<int> dp;
        
        sort(env.begin(),env.end(),cmp);
        
        for(int i=0;i<n;i++){
            int ele = env[i][1];
            
            int ind = lower_bound(dp.begin(),dp.end(),ele) - dp.begin();
            
            if(ind >= dp.size()) dp.push_back(ele);
            else 
                dp[ind] = ele;

        }
        
        
        return dp.size();
    }
};