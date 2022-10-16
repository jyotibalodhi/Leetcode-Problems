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
    
    void solve(TreeNode *root, long long ubound,long long lbound, bool &flag){
        
        if(!root)
            return;
        
        if(flag){
            solve(root->left,root->val,lbound, flag);
            
            if(root->val >= ubound || root->val <= lbound)
            {
                flag = false;
                return;
            }
            
            solve(root->right, ubound,root->val, flag);
        }
    }
    
    bool isValidBST(TreeNode* root) {
        
        if(!root)
            return true;
        
        long long ubound  = LONG_LONG_MAX;
        long long lbound  = LONG_LONG_MIN;

        bool flag = true;
        
        solve(root, ubound,lbound,flag);
        return flag;
        
    }
};