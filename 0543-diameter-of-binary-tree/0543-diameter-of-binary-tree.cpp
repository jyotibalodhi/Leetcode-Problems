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
    int solve(TreeNode* root, int &diameter){
        
        if(!root)
            return 0;
        
        int maxl = solve(root->left,diameter);
        int maxr =  solve(root->right,diameter);
        
        diameter = max(diameter, maxl+maxr);
        
        return max(maxl,maxr)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int diameter = 0;
        solve(root, diameter);
        
        return diameter;
    }
};