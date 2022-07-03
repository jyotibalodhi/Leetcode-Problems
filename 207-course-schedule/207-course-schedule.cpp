class Solution {
public:
    
 
 bool dfs(int node, vector<int> &vis, vector<int> &dfsVis, unordered_map<int, vector<int>> &adj){
     
        vis[node]=1;  // mark visited
        dfsVis[node] =1;
     
        for(auto it: adj[node]){
            if(dfsVis[it]) return true;
            else if(!vis[it] && dfs(it, vis, dfsVis, adj))
                    return true;
        }
     
     dfsVis[node]=0;
     return false;
      
    }
    
    bool canFinish(int v, vector<vector<int>>& pre) {
        
        // cycle detection in graph
        //if cycle present courses can not be completed
        
        unordered_map<int, vector<int>> adj(v);  // adjancy list
        vector<int> vis(v,0);                 // visited array
        vector<int> dfsVis(v,0);
        
        //making an adjancy list
        for(int i=0; i< pre.size();i++){
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        
        
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i, vis, dfsVis, adj)) return false;
            }
        }
        
        return true;
    }
};