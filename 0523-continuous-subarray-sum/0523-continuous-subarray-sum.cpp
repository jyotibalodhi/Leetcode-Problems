class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int size=nums.size();
        long long sum=0;
        
        for(int j=0;j<size;j++){
            
            sum+=nums[j];
            
            if(j > 0)
                if(sum % k == 0)
                    return true;
            
            if(mp.find(sum % k) != mp.end()){
                if(j - mp[sum % k] > 1)
                    return true;
            }
            else
                mp[sum % k]=j;
        }
        return false;
    }
};