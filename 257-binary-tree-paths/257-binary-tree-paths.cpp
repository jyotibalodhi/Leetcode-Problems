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
    
    void dfs(TreeNode *root, vector<string> &ans,string s){
        if(!root)
            return;
        
        s.append(to_string(root->val) + "->");

        if(!root->left && !root->right)  //leaf node
        {
            int n = s.length();
            ans.push_back(s.substr(0,n-2));
            return;
        }
        
        dfs(root->left,ans,s);
        dfs(root->right,ans,s);        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        if(!root) return {};
        
        vector<string> ans;
        dfs(root,ans,"");
        return ans;
    }
};