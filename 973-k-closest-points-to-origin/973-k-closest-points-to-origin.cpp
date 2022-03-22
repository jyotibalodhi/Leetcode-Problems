class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        int m= p.size();
        
        priority_queue <pair<float, vector<int>>> pq;

        for(int i=0;i<m;i++){
            float dis= (sqrt(pow(p[i][0],2) +pow(p[i][1],2) ));
            if(pq.size()>=k && dis== pq.top().first) continue;
            
             pq.push(make_pair(dis,p[i]));
             if(pq.size()>k)  pq.pop();            
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
        
    }
};