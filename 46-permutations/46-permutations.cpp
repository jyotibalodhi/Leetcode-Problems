class Solution {
public:
    
    void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> ds, int ind){
        
        if(ind == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 11)  //question constraint
            {
                ds.push_back(nums[i]);
                int val = nums[i];
                nums[i] = 11;
                solve(nums,ans,ds,ind+1);
                nums[i] = val;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(nums,ans, ds,0);
        return ans;
    }
};