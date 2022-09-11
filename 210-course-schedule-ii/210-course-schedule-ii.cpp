class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& arr) {
        
        
        unordered_map<int, vector<int>> adj;  //adjancy list
        vector<int> indegree(v,0);

        for(int i=0;i<arr.size();i++){
            int u = arr[i][0];
            int v = arr[i][1];
            
            adj[v].push_back(u);              //directed graph
            indegree[u]++;
        }
        
        
        vector<int> ans;
        
        queue<int> q;
        
        for(int i=0;i<v;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
                
            ans.push_back(node);
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0)
                     q.push(it);
            }
            
        }
        
        if(ans.size() == v)
            return ans;
        
        return {};
    }
};