/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    //every leaf node == 0 remove
    // after removing leafs if a node becomes leaf and is == 0 remove
    //Traversing in post order 
    
    bool isLeaf(TreeNode * node){
        
        if(!node->left && !node->right)
            return true;
        
        return false;        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        if(!root)
            return root;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if(isLeaf(root) && root->val == 0)
            return nullptr;
        
        return root;
    }
};