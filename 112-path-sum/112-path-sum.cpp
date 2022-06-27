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
    bool CheckSum(TreeNode * root, int t, int sum){
        
         if(!root)
             return false;
           
           sum += root->val;
        
           if(root->left==NULL && root->right==NULL){
               if(sum == t)return true;
           }
           
           return CheckSum(root->left ,t,sum) || CheckSum(root->right ,t ,sum);
                                                                   
    }
                                                                   
    bool hasPathSum(TreeNode* root, int targetSum) {
          return CheckSum(root, targetSum, 0);
    }
};