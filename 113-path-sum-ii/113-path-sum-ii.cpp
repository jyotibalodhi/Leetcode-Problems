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
    
    void solve(TreeNode * root, int target, vector<vector<int>>& ans, vector<int> &ds){

        if(!root)
            return;
        
        
        ds.push_back(root->val);
        target -= root->val;
        
        
        if(!root->left && !root->right){        // leaf node
            if(target == 0){
                ans.push_back(ds);
            }
        }
        else{
            solve(root->left, target, ans, ds);
            solve(root->right, target,ans, ds);
        }
        
        
        ds.pop_back();
      
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        
        if(!root)
            return {};
        
        
        vector<vector<int>> ans;
        vector<int> ds;
        solve(root, target, ans, ds);
        
        return ans;
    }
};