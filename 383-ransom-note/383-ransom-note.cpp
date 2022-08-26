class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> umap1;
        unordered_map<char, int> umap2;
        for(auto i:ransomNote){
            umap1[i]++;
        }
        for(auto i:magazine){
            umap2[i]++;
        }
        for(auto i:ransomNote){
            if(umap1[i]> umap2[i]){
                return false;
            }
        }
        return true;
    }
};