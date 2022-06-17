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

    int minCameraCover(TreeNode* root) 
    {
        int res=0;
        return (dfs(root,res) < 1 ? 1 : 0) + res;
    }

    int dfs(TreeNode* root,int &res) 
    {
        if (!root) return 2;
        int left = dfs(root->left,res), right = dfs(root->right,res);
        if (left == 0 || right == 0) 
        {
            res++;
            return 1;
        }
        return left == 1 || right == 1 ? 2 : 0;
    }
};
