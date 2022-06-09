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
        // iterative solution
        
        stack<TreeNode *> stk;
        vector<int> res;
        
        TreeNode *node = root;
        
        while(1){
            if(node){
                res.push_back(node->val);
                stk.push(node);
                node = node->left;
            }
            else{
                if(stk.empty()) break;
                node = stk.top();
                stk.pop();
                node = node->right;
            }
        }
        
        return res;
    }
};