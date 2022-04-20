class BSTIterator {
        
private:
    void inOrder(TreeNode* root) {
        if (!root)
            return;
        inOrder(root->left);
        nodes.push_back(root->val);
        inOrder(root->right);
    }
    
    vector<int> nodes;
    int curr = 0;
    
public:
    BSTIterator(TreeNode* root) {
        inOrder(root);
    }
    
    int next() {
        curr++;
        return nodes[curr-1];
    }
    
    bool hasNext() {
        return curr != nodes.size();
    }

};