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
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        
        if(!root->left && !root->right) return 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            TreeNode *node= q.front();
            q.pop();
            if(node->val %2 !=0)  {
                 if(node->left){
                    if(node->left->left || node->left->right)
                      {  
                            q.push(node->left);
                      }
                    }
                 if(node->right){
                    if(node->right->left || node->right->right)
                    { 
                        q.push(node->right);
                     }
                }
                 continue;
            }
            else{
                
                //for left subtree
                if(node->left){
                    if(node->left->left || node->left->right)
                      {  
                            q.push(node->left);
                        if(node->left->left){
                            cout<<node->left->left->val<<" + ";
                            sum+=node->left->left->val;
                        }
                        if(node->left->right){
                            cout<<node->left->right->val<<" + ";
                            sum+=node->left->right->val;
                        }
                    }
                }
                    //for right subtree
                     if(node->right){
                if(node->right->left || node->right->right)
                   { 
                        q.push(node->right);
                        if(node->right->left){
                            cout<<node->right->left->val<<"+ ";
                            sum+=node->right->left->val;
                        }
                        if(node->right->right){
                            cout<<node->right->right->val<<"+ ";
                            sum+=node->right->right->val;
                        }
                }
                }
            }
        }
        
        return sum;
    }
};