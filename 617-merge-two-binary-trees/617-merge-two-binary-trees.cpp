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
    TreeNode* mergeTrees(TreeNode* r1, TreeNode* r2) {
        if(!r1 && !r2) return nullptr;
        
        TreeNode* node=new TreeNode();
        if(r1 && r2){
            node->val = r1->val + r2->val;
        }
        else{
            if(r1) node->val = r1->val;
            else if(r2) node->val = r2->val;
        }
        
        node->left = mergeTrees(r1? r1->left :nullptr ,r2 ? r2->left :nullptr);
        node->right = mergeTrees(r1? r1->right :nullptr ,r2 ? r2->right :nullptr);
        
        return node;
        
    }
};