class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        unordered_map<int, char> umap(ind.size());
         
        for(int i=0;i<ind.size();i++){
            umap[ind[i]]=s[i];
        }
        
        string res="";
        
         for(int i=0;i<ind.size();i++){
            res+= umap[i];
        }
        return res;
    }
};