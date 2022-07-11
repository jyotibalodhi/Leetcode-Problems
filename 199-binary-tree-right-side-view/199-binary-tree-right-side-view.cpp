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
    void dfs(TreeNode* node, vector<int> &ds, int level){
        //Root Right Left traversal for right view
        
        if(node == nullptr) return;
        
        if(level == ds.size())
            ds.push_back(node->val);
        
        dfs(node->right, ds, level+1);
        dfs(node->left, ds, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        
        dfs(root, ans,0);
        return ans;
    }
};