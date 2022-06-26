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
 
    int getDiameter(TreeNode *root,int &d){
        
        if(!root) return 0;
        
        
        int maxl = getDiameter(root->left,d);
        int maxr = getDiameter(root->right,d);   
        
        if(maxl +maxr > d)
            d= maxl +maxr;
        
        return max(maxl,maxr)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        //Diameter should be max left height + max right height - 2
        int d=0;
        
        getDiameter(root,d);
        
        return d;
    }
};