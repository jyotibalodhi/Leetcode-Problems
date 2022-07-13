class Solution {
public:

    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        
        int curSum = 0;
        int cnt = 0;
        
        for(auto i: nums)
        {
            curSum += i;
            if(curSum == k) cnt++;
            if(mp.find(curSum - k) != mp.end())
            {
                cnt += mp[curSum - k];
            }
            mp[curSum]++;
        }
        return cnt;
    }
};