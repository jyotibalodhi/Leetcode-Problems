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
    vector<double> averageOfLevels(TreeNode* root) {
       
        if(!root)
            return {};
        
        vector<double> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int k = q.size();
            double size = q.size();
            
            double val = 0.00000;
            
            while(k--){
                TreeNode* curr = q.front();
                q.pop();
                
                val += (double)curr->val;
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
                
            }
            
            double avrg = val / size;
            res.push_back(avrg);
        }
        
        return res;
    }
};