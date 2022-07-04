
class Solution {
public:
      Node* dfs(Node* cur,unordered_map<Node*,Node*>& mp)
    {
          
        Node* clone=new Node(cur->val);
        mp[cur]=clone;
          
            for(auto it:cur->neighbors)
            {
                if(mp.find(it)!=mp.end())   //already clone and stored in map
                {
                    //directly push back the clone node from map to neighbors
                    clone->neighbors.push_back(mp[it]);    
                }
                else
                    clone->neighbors.push_back(dfs(it,mp));
            }
           
          return clone;
    }
    
    Node* cloneGraph(Node* node) {
        
        unordered_map<Node*,Node*> mp;
        
        if(node==NULL)
            return NULL;
        
        if(node->neighbors.size()==0)   //if only one node present no neighbors
        {
            Node* clone= new Node(node->val);
            return clone; 
        }
        
        return dfs(node,mp);
    }
};