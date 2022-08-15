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
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(!root) return {};
        
        vector<int> res;
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        
        
        while(1){
            if(curr){
                stk.push(curr);
                res.push_back(curr->val);
                curr= curr->left;
            }
            else{
                if(stk.empty())
                    break;
                
                TreeNode * node = stk.top();
                stk.pop();
                
                curr = node->right;
            }
        }
        
        return res;
    }
};