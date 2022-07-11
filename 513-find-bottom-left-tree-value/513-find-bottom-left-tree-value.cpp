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
    
    void dfs(TreeNode* node, vector<int> &ds, int level,int &ans){
        
        if(node == nullptr) return;
        
        if(level ==ds.size()){
            ds.push_back(node->val);
            ans = node->val;
        }
        dfs(node->left,ds,level+1,ans);
        dfs(node->right,ds,level+1,ans);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        vector<int> ds;
        int ans;
        dfs(root, ds, 0,ans);
        return ans;
    }
};