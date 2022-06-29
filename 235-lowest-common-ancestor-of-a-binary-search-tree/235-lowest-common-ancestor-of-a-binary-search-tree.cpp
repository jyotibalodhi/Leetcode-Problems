/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        while(root){
            if(root->val == p->val || root->val == q->val){
                break;
            }
            
            if(root->val <p->val && root->val < q->val)  // Both on right
                root= root->right;
            
            else if(root->val >p->val && root->val > q->val)  // Both on left
                root = root->left;
            else                   //one on left other on right, so root becomes the lca
                break;
        }
        return root;
    }
};