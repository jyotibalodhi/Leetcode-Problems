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
        
        if(!root) return {};
        
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        
        q.push(root);
        int level =1;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> ds;
            
            while(size--){
                TreeNode *node = q.front();
                q.pop();
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                ds.push_back(node->val);
            }
            
            if(level % 2 ==0)  // reverse array for alternate levels
                reverse(ds.begin(),ds.end());
            
            level++;
            ans.push_back(ds);
        }
        return ans;
    }
};