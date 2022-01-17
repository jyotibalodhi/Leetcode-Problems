class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int i=umap[0];
        int j =umap[1]+i;
        int k=umap[2]+j;
        for(int x=0;x<nums.size();x++){
            if(x< i){
                nums[x]=0;
            }else if(x>= i && x<j){
                nums[x]=1;
            }else if(x>= j && x<k){
                nums[x]=2;
            }
        }
    }
};