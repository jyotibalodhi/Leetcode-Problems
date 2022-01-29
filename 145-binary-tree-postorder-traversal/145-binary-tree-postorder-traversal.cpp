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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        vector<int> res;
        if(!root) return res;
        
        stk.push(root);
        while(!stk.empty()){
            TreeNode* curr = stk.top();
            res.push_back(curr->val);
            stk.pop();
            if(curr->left) stk.push(curr->left);
            if(curr->right) stk.push(curr->right);      
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};