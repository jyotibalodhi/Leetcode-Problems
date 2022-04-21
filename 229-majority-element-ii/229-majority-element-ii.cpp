class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        
        unordered_map<int,int> umap;
        for(int i=0;i<n; i++){
            umap[nums[i]]++;
        }
        
        for(auto i: umap){
            if(i.second > floor(n/3))
                 ans.push_back(i.first);
        }
       
        return ans;
    }
};