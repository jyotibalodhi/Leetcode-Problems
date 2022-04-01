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
    
    void inorder(TreeNode * root,vector<int> &res){
        if(root){
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        inorder(root1,arr1);
        vector<int> arr2;
        inorder(root2,arr2);

        for(int i= arr2.size()-1;i>=0;i--){
            int val = arr2[i];
            arr1.push_back(val);
            arr2.pop_back();
        }
        
        sort(arr1.begin(),arr1.end());
        
        return arr1;
    }
};