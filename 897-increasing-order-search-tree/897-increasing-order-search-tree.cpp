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
    TreeNode* newRoot=new TreeNode();
    TreeNode* curr=newRoot;
    void inorder(TreeNode * root){
        if(root){
            inorder(root->left);
            TreeNode * node= new TreeNode(root->val);
            if(!newRoot)
                curr=node;
            else{
                curr->right =node;
                curr=curr->right;
            }
            inorder(root->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return newRoot->right;
    }
};