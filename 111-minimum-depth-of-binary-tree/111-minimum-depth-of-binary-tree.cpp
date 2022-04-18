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
    int minDepth(TreeNode* root) {
       if(!root)  return 0;
        
        int minl = 1+ minDepth(root->left);
        int minr = 1+ minDepth(root->right);
        
        if(minl==1) return minr;
        else if(minr==1) return minl;
        return min(minl,minr);
    }
};