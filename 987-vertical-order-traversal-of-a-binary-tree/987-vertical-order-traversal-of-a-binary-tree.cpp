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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
         if(!root)
            return {};
        
        queue <pair<TreeNode*, int>> q;
        map<int, vector<pair<int,int>>> mp;
        
        q.push({root,0});
        
        int level =0;
        // O(N)
        while(!q.empty()){
            
            int k = q.size();
            
            while(k--){
                auto curr = q.front();
                q.pop();

                int x = curr.second;
                TreeNode* node = curr.first;

                mp[x].push_back({level,node->val});

                if(node->left)
                    q.push({node->left,x-1});

                if(node->right)
                    q.push({node->right,x+1});
            }
            level++;
        }
        
        vector<vector<int>> ans;
        
        //  map<int, vector<pair<int,int>>> mp
        
        // O(h*n)
        for(auto i: mp){
            vector<pair<int,int>> col;
            vector<int> temp;
            for(auto j : i.second){
                
                col.push_back(j);
            }
            sort(col.begin(),col.end());
            for(auto it: col){
                temp.push_back(it.second);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};