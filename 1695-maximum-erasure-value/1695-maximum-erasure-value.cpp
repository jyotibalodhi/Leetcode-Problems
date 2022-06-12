class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> umap;
        
        int sum=0,res=0;
        int i=0,j=0;
        
        while(j<nums.size()){
            if(umap[nums[j]]){ 
                while(umap[nums[j]]){ 
                    umap[nums[i]]--;
                    sum-=nums[i];
                    i++;
                }
            }
            else{ 
                sum+=nums[j];
                res=max(res,sum); 
                umap[nums[j]]++;
                j++;
            }
        }
        return res;
    }
};