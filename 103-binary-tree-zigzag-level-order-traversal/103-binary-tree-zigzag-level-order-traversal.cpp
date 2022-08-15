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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        
        
        q.push(root);
        
        bool leftToRight = true;
        
        while(!q.empty()){
            int k = q.size();
            vector<int> level(k,0);
            
            for(int i=0;i<k;i++){
                TreeNode* curr = q.front();
                q.pop();
                
                int index = leftToRight ? i : k-1-i;
                
                level[index]= curr->val;
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        
        return ans;
    }
};