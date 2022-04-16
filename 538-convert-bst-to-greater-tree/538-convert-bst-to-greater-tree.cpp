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
    int val=0;
    void revPre(TreeNode* node){
        if(node){
            revPre(node->right);
            node->val += val;
            val = node->val;     
            revPre(node->left);  
        }
    }
    
    TreeNode* convertBST(TreeNode* root) {
        revPre(root);
        return root;    
    }
};