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
    vector<int> postorder(Node* root) {
        
       vector<int> res;
        
        if(!root)return res;
        
        stack<Node*> s1,s2;
        Node* curr = root;
        s1.push(root);
        
        while(!s1.empty()) {
            curr = s1.top();
            s1.pop();
            s2.push(curr);
            for(Node* c: curr->children)
                if(c) 
                    s1.push(c);
        }
        
        while(!s2.empty()) {
            curr= s2.top();
            s2.pop();
            res.push_back(curr->val);
        }
        
        return res;
    }
};