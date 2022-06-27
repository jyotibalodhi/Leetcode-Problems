
class Solution {
public:
    
     TreeNode* BT(vector<int>& pos, int posStr, int posEnd, vector<int>& in, int inStr, int inEnd, map<int,int> &mp){
        
        if(posStr > posEnd || inStr >inEnd) return NULL;
        
        TreeNode * root = new TreeNode(pos[posEnd]);
        
        int ind = mp[root->val];
        int leftNum = ind - inStr;
        
        root -> left = BT( pos , posStr , posStr + leftNum -1, in , inStr , ind-1, mp);
        root -> right = BT( pos , posStr + leftNum , posEnd-1 , in , ind+1 , inEnd , mp);
        
        return root;

    }
    
    
    TreeNode* buildTree(vector<int>& in, vector<int>& pos) {
        
        if(pos.size() != in.size()) return NULL;
        
          map<int,int> mp;
        
        for(int i=0 ; i<in.size() ; i++){
            mp[in[i]] =i;
        }
        
        TreeNode * root = BT(pos,0,pos.size()-1,in,0, in.size()-1,mp);
        
        return root;
    }
};