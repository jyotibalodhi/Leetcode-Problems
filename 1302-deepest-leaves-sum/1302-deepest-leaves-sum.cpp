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
    int deepestLeavesSum(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        
        queue<TreeNode*> q;
        vector<int> res;
        
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            vector<int> level;
            
            for(int i=0;i<size;i++) {
                TreeNode * node =q.front();
                q.pop();
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                level.push_back(node->val);
            }
            
            res = level;
        }
        
        int sum=0;
        for(int i=0;i<res.size();i++){
            sum+= res[i];
        }
        return sum;
    }
};