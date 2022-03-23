typedef pair<int, int> pi;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> res;
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        for(auto i: freq){
         
            pq.push(make_pair(i.second, i.first));
            if(pq.size()>k) pq.pop();
        }
        
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
    return res;
    }
};