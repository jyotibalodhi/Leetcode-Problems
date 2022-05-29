class Solution {
    
    void allPer(vector<int> nums, vector<vector<int>> &ans, vector<int> ds){
        
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 11){
                ds.push_back(nums[i]);
                int val = nums[i];
                nums[i]=11;  //marking as taken
                allPer(nums, ans, ds);
                nums[i]=val;  //unmarking
                ds.pop_back();
            }
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
 
        allPer(nums,ans,ds);

        
        return ans;
    }
};