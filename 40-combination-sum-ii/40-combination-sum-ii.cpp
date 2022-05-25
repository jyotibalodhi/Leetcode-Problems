class Solution {
public:
    
    void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> ds, int t, int ind){
      
            if(t==0){
                ans.push_back(ds);
                return;
            }
        
        for(int i=ind ;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            
            if(nums[i] >t) break;
            
            ds.push_back(nums[i]);
            solve(nums,ans,ds,t-nums[i],i+1);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        sort(nums.begin(),nums.end());
        
        solve(nums,ans,ds,t,0);
        
        return ans;
    }
};