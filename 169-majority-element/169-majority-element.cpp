class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans;
        unordered_map<int,int> umap;
        for(int i=0;i<n; i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<n; i++){
            if(umap[nums[i]]>floor(n/2))
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};