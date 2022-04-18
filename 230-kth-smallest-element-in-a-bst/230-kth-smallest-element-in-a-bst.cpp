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
   
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*> q;
        while (true) {
            while (root) {
                q.push_back(root);
                root = root->left;
            }
            root = q.back();
            q.pop_back();
            k -= 1;
            if (k == 0) { return root->val; }
            root = root->right;
        }
    }
};