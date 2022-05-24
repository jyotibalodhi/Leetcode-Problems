class Solution {
public:
    
    void solve(vector<int>& nums, vector<vector<int>> &ans, vector<int> ds, int ind){
        
       if(ind == nums.size()){
           ans.push_back(ds);
           return;
       }
        
        
        ds.push_back(nums[ind]);  //inculde
        solve(nums,ans,ds,ind+1);
        
        //exclude
        
        ds.pop_back();
        solve(nums,ans,ds,ind+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(nums,ans, ds,0);
        
        return ans;
    }
};