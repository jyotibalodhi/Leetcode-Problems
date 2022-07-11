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
    
    void dfs(TreeNode* node, int level,int &ans,int &height){
        
        if(node == nullptr) return;
        
        if(level > height){
            ans = node->val;
            height = level;
        }
        
        dfs(node->left,level+1,ans,height);
        dfs(node->right,level+1,ans,height);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int h=0;
        int ans;
        dfs(root,1,ans,h);
        return ans;
    }
};