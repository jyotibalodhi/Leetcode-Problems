class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]] =i;
        }
        
        vector<int> res;
        
        for(int i=0;i<n;i++){
            int val = target - nums[i];
            
            if(mp.find(val) != mp.end() && i != mp[val]){
                res.push_back(i);
                res.push_back(mp[val]);
                
                return res;
            }
        }
        
        return res;
    }
};