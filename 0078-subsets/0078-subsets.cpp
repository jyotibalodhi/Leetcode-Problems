class Solution {
public:
    void solve(vector<int> &nums, int i, vector<int> ds, vector<vector<int>> &ans){
        
        
        if(i == nums.size()){
            ans.push_back(ds);
            return;
        }

        ds.push_back(nums[i]);
        solve(nums,i+1,ds,ans);
                
        ds.pop_back();
        solve(nums,i+1,ds,ans);

    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        
        solve(nums,0, {},ans);
        return ans;
    }
};