class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        
        int mod = 1000000007;
        
        
        vector<pair<int, int>> nums;
        
        for(int i=0;i<n;i++){            
            nums.push_back({eff[i],speed[i]});
        }
        
        long speedSum =0;
        long ans =0;
        
        sort(nums.rbegin(),nums.rend());
        
        priority_queue<int,vector<int>, greater<int>> pq;
        
        
        for(int i=0;i<n;i++){
            int e = nums[i].first;
            int s = nums[i].second;
            
            pq.push(s);
            speedSum += s;
            
            if(pq.size()>k){
                speedSum -= pq.top();
                pq.pop();
            }
            
            ans = max(ans, speedSum*e);
        }
        
        return ans%mod;
        
    }
};