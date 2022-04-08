class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      unordered_map<int,int> umap;
        vector<int> arr =nums;
        
        sort(arr.begin(), arr.end());
        int n= nums.size();
        
        for(int i=n-1;i>=0;i--){
            umap[arr[i]] = i;
        }
        
        for(int i=0;i<n;i++){
            nums[i]= umap[nums[i]];
        }
        
        return nums;
    }
};