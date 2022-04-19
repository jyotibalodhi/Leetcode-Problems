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
    unordered_map<int,int> umap;
    void dfs(TreeNode *root){
        if(root){
            dfs(root->left);
            umap[root->val]++;
            // cout<< root->val<<"  : "<<umap[root->val]<<endl;
            dfs(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        int maxfreq=-1;
        
        dfs(root);
       vector<int> res;
        for(auto i:umap){
            if(i.second>maxfreq) {
                maxfreq=i.second;
            }
        }
        
          for(auto i:umap){
            if(i.second==maxfreq) {
                res.push_back(i.first);
            }
        }
        
        return res;
    }
};