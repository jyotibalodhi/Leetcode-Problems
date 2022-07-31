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
    
    vector<int> preorder(Node* root) {
        if(!root) return {};
        
        vector<int> res;

        stack<Node*> stk;
        stk.push(root);
        
        while(!stk.empty()){
            Node * node = stk.top();
            stk.pop();
            res.push_back(node->val);
            
            vector<Node *> child = node->children;
            
             for(int i=child.size()-1;i>=0;i--){
                stk.push(child[i]);
            }
            
        }

        return res;
    }
};