class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         int n=nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]=-1;
        }
       for(int i=0;i<n;i++){
           if(umap[nums[i]]==-1){
               umap[nums[i]]=i;
           }
           else{
               if((i-umap[nums[i]])<=k){
                   return true;
               }
               else{
                   umap[nums[i]]=i;
               }
           }
       }
        return false;
    }
};









// 1,2,3,4,5,6,2,2
// k=1