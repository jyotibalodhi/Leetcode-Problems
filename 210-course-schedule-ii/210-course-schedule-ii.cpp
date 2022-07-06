class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& arr) {
        
        
        unordered_map<int, vector<int>> adj;
        vector<int> ind(v,0);
        queue<int> q;
        
        vector<int> ans;
        
        //making adjancy list
        for(int i=0;i<arr.size();i++){
            adj[arr[i][0]].push_back(arr[i][1]);
        }
        
        
        for(int i=0;i<adj.size();i++){
            for(int it: adj[i])
            {
                ind[it]++;
            }      
        }
        
        for(int i=0;i<v;i++){
            if(ind[i]==0) q.push(i);
        }
        
        int cnt=0;
        
        while(!q.empty()){
            
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            cnt++;
            for(int it:adj[node]){
                ind[it]--;
                if(ind[it]==0) q.push(it);
            }
        }
        
        if(cnt != v) return {};    // if cyclic graph
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};