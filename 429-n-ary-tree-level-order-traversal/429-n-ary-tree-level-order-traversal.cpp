/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root)
            return {};
        
        vector<vector<int>> res;
        
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()){
            
            int k = q.size();
            vector<int> level;
            
            while(k--){
                Node *curr = q.front();
                q.pop();
                
                level.push_back(curr->val);
                
                for(Node * it: curr->children){
                    if(it){
                        q.push(it);
                    }
                }              
            }
            
            res.push_back(level);
        }
        
        
        return res;
    }
};