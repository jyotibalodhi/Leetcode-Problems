class Solution {
public:
    
    void solve(vector<int> &nums, vector<vector<int>> & ans,vector<int> ds,int t, int i){

        
        if(i == nums.size()){
            if(t==0) ans.push_back(ds);
            return;
        }
       
        //include
        if(nums[i]<= t)
       { 
         ds.push_back(nums[i]);
         solve(nums,ans,ds,t-nums[i],i);
         ds.pop_back();

        }
        //exclude
        solve(nums,ans,ds,t,i+1);

    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(nums, ans, ds, t,0);
        
        return ans;
    }
};