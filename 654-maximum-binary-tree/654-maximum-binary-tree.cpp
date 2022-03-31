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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums,int start=-1, int end=-1) {
        
        if(start==-1 && end==-1){
            start =0;
            end= nums.size()-1;
        }
        
         if(start>end) return nullptr;
        
        int pos;
        int max = INT_MIN;
        for(int i=start;i<=end;i++){
            if(nums[i]>max){
                pos=i;
                max=nums[i];
            }
        }
        
        TreeNode* root=new TreeNode(max);
        root->left=constructMaximumBinaryTree(nums,start,pos-1);
        root->right=constructMaximumBinaryTree(nums,pos+1,end);
        return root;
    }
    
};