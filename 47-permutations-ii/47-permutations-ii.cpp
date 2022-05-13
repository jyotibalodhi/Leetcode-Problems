class Solution {
private:
    void solve(vector<int>& nums,set<vector<int>> &s,vector<int> ds){
        
        if(ds.size()==nums.size()){            
            s.insert(ds);               
            return ;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=11){           
                int j=nums[i];
                nums[i]=11;        
                ds.push_back(j);     
                solve(nums,s,ds);  
                nums[i]=j;     
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;        
        vector<vector<int>> ans;
        
        solve(nums,s,{});
        
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};