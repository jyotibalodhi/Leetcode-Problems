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
    vector<int> dfs;
    int i=0;
    
    void inorder(TreeNode * &root,int k){
        if(root){
            inorder(root->left,k);
            if(k==0)
            {
                dfs.push_back(root->val);
            }
            else{
                root->val= dfs[i++];
            }
            inorder(root->right,k);
        }
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root,0); //for storing the values
        
        sort(dfs.begin(),dfs.end());
        inorder(root,1); //for correcting the tree using sorted inorder
        
    }
};