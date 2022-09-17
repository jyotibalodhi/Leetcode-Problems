class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newnums) {
        
        int n = nums.size();
        
        if(n == 0)
            return {newnums};
        
        vector<vector<int>> ans;
        
        nums.push_back(newnums);
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<=n;i++){
            
            vector<int> interval = nums[i];
            
            if(ans.empty())  //first interval
            {
                ans.push_back(interval);
            }
            else{
                vector<int> temp = ans.back();
                
                if(interval[0] > temp[1])        // non overlapping interval
                {
                    ans.push_back(interval);
                }
                else{                             // over lapping interval
                    
                    int val = max(interval[1],temp[1]);
                    temp[1] = val;
                    ans.pop_back();
                    ans.push_back(temp);
                }
            }
        }
        
        return ans;
    }
};