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
    bool solve(TreeNode* root, int k,unordered_set<int> &s){
        if(!root) return false;
        
            bool l= solve(root->left,k,s);
            if(s.find(k - root->val) != s.end())  // found in set
            {
                return true;
            }
            else s.insert(root->val); 
            bool r = solve(root->right,k,s);
            return r || l;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        
        return solve(root, k, s);
    }
};