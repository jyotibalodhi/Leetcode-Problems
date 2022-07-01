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
    
struct data{
    int sum = 0;
    int check = true;
    int mi = INT_MAX;
    int ma = INT_MIN;
};

data maxSum(TreeNode *root, int &value)
{
    data ans,ll,rr;
    
    if (root == nullptr)
        return ans;

    ll = maxSum(root->left,value);
    rr = maxSum(root->right,value);
    
    ans.sum = ll.sum + rr.sum + root->val;
    ans.check = ((root->val) > ll.ma ) && ((root->val) < rr.mi) && ll.check && rr.check;
    ans.mi = min(root->val,ll.mi);
    ans.ma = max(root->val,rr.ma);
    
    if (ans.check)
        value = max(value, ans.sum);

    return ans;

}
    int maxSumBST(TreeNode* root) {
        
            int value = INT_MIN;
            maxSum(root,value);
            return ((value<0)?0:value);
    }
};