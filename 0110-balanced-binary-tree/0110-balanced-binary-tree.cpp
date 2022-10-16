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
    int solve(TreeNode* root, bool &flag){
        
        if(!root)
            return 0;
        
        if(!flag) return -1;
        
        int maxl = solve(root->left, flag);
        int maxr = solve(root->right, flag);
        
        if(abs(maxl- maxr) > 1)
        {
            flag = false;
            return 0;
        }
        
        return max(maxl,maxr)+1;
    }
    bool isBalanced(TreeNode* root) {
        
        if(!root)
            return true;
        
        bool flag = true;
        solve(root, flag);
        
        return flag;
    }
};