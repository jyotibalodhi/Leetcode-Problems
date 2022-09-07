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
 
    void preorder(TreeNode* root,string &res)
    {
      
        if(root == NULL)
            return;
        
        res += '(';     
        res += to_string(root -> val);

        if(root -> left == NULL && root -> right)
        {
            res += "()";
        }
       
        preorder(root -> left,res);
       
        preorder(root -> right,res);
        
        res += ')';
    }
    
    string tree2str(TreeNode* root) {
        
        
        string res = "";
        preorder(root,res);
        
        // remove the first and last parenthesis from res     
        return res.substr(1, res.size() - 2);
    }
};