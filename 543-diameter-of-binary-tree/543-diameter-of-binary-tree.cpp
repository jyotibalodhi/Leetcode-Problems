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

    int dfs(TreeNode* root, int &ans){
        if(!root)
            return 0;
        
        int maxl =  dfs(root->left,ans);
        int maxr = dfs(root->right,ans);
        
        ans = max(ans, maxl+maxr);
        return max(maxl,maxr)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int ans =0;
        dfs(root,ans);
        return ans;
    }
};