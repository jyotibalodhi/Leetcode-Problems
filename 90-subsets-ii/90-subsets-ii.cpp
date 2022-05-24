class Solution {
public:
    
    void solve(vector<int>& nums, vector<vector<int>>& ans,vector<int> ds,int ind){
       ans.push_back(ds);
        
        for(int i=ind ;i <nums.size();i++){
            //for avoiding duplicates
            if(i!=ind && nums[i]== nums[i-1]) continue;
            
            ds.push_back(nums[i]);
            solve(nums,ans,ds,i+1);
            ds.pop_back();
        }

    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        sort(nums.begin(),nums.end());
        
        solve(nums,ans, ds, 0);
        
        return ans;
    }
};