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
    TreeNode * ConBST(vector<int> pre, int ps, int pe, vector<int> in,int is,int ie, unordered_map<int,int> &mp){
        if(ps > pe ||is > ie) return NULL;
        
        TreeNode *node = new TreeNode(pre[ps]);
        
        int ind = mp[node->val];
        int leftNum = ind -is;  // No of nodes in left subtree of node
        
        node->left = ConBST(pre, ps+1, ps + leftNum, in, is, ind-1, mp);
        node->right = ConBST(pre, ps +leftNum+1, pe, in, ind+1, ie, mp);
        
        return node;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& pre) {
        
        vector<int> in = pre;
        int n = pre.size();
        unordered_map<int,int> mp;
        
        sort(in.begin(),in.end()); // inorder of BST is always sorted
        
        for(int i=0; i<n;i++){
            mp[in[i]]=i;
        }
        TreeNode * root = ConBST(pre, 0, n-1, in, 0, n-1, mp);
        return root;
    }
};