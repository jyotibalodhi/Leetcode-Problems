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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode* curr=root;
        vector<int> res;
        if (!root) return res;
        while(1){
            if(curr != NULL){
                stk.push(curr);
                curr=curr->left;
            }
            else{
                if(stk.empty()) break;
                curr= stk.top();
                stk.pop();
                res.push_back(curr->val);
                curr=curr->right;
            }
        }
        return res;
    }
};