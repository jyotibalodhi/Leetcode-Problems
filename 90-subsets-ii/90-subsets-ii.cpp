class Solution {
public:
    
    void solve(vector<int>& nums, set<vector<int>>& ans,vector<int> ds,int i){
        if(i==nums.size()){
            sort(ds.begin(),ds.end());
            ans.insert(ds);
            return;
        }
        
        ds.push_back(nums[i]);
        solve(nums,ans,ds,i+1);
        
        ds.pop_back();
        solve(nums,ans,ds ,i+1);

    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> ds;
        
        solve(nums,ans, ds, 0);
        
      vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};