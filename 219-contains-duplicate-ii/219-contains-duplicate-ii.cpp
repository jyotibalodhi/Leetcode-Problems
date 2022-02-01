class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> umap1{0},umap2;
        for(int i=0;i<n;i++){
            if(umap1[nums[i]]>k || umap2[nums[i]]<=1)
           { umap1[nums[i]]=abs(i-umap1[nums[i]]);}
            umap2[nums[i]]++;
            // cout<<umap1[nums[i]]<<" "<<nums[i]<<" "<<umap2[nums[i]]<<endl;     
        }
        
        for(int i=0;i<n;i++){
            if(umap2[nums[i]]>=2){
                if(umap1[nums[i]]<=k)
                    return true;
            }
        }
        return false;
    }
};