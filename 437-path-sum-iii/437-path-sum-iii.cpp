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

#define ll long long int

class Solution {
public:
    
    void solve(TreeNode * root, int& target, ll sum, int &res, unordered_map<ll,ll> mp){
        
        if(!root){
            return;
        }
        
        ll num = sum + root->val;
                
        if(num == target)
            res++;
        if(mp.find(num - target) != mp.end() && mp[num-target])
            res += mp[num-target];
        
        mp[num]++;
        solve(root->left,target,sum+ root->val,res,mp);
        solve(root->right,target,sum+ root->val,res,mp);

        mp[num]--;               
    }
    
    int pathSum(TreeNode* root, int target) {
        
        if(!root)
            return 0;
        
        int res =0;
        unordered_map<ll,ll> mp;
        
        solve(root, target, 0,res,mp);  //0 --> initial sum
        return res;
    }
};