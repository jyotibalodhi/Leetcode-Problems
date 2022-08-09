class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
        vector<int> v;
        
        int n=nums.size();
        
        if(n<2) return v;

        for (int i = 0; i < n; ++i) {

         if (mp.find(target - nums[i]) != mp.end()) {

             v.push_back(i);
             v.push_back(mp[target - nums[i]]);
             return v;
         }

         mp[nums[i]] = i;
        }
        
        return v;
    }
};