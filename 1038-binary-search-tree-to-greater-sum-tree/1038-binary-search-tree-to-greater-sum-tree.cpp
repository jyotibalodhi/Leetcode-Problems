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
    
    void revInorder(TreeNode* root, int &c){
        if(root){
            revInorder(root->right, c);
            root->val +=c;
            c=root->val;
            revInorder(root->left, c);
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        int c=0;
        revInorder(root,c);
        return root;
    }
};