class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> umap{0};
        int count=0;
        for(int i=0;i<stones.length();i++){
            umap[stones[i]]++;
        }
        
        for(int i=0; i<jewels.length();i++){
            if(umap[jewels[i]]!=0)
               { count+=umap[jewels[i]];
               umap[jewels[i]]=0;
               }
        }
        return count;
    }
};