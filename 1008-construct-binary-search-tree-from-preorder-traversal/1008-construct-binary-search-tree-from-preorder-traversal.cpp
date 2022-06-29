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
    TreeNode* ConBST(vector<int>& pre, int &i, int bound){
        
        if(i >=  pre.size() || pre[i] >bound) return nullptr;
        
        TreeNode * root = new TreeNode(pre[i]);
        i++;
        
        root->left = ConBST(pre, i, root->val);
        root->right = ConBST(pre, i, bound);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& pre) {
        // O(n) solution
        
        int ind=0;
        return ConBST(pre, ind, INT_MAX); // preorder, starting index, upper bound for root
    }
};