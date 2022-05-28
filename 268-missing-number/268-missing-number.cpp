class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n= nums.size();
        
        int val=n*(n+1)/2;
        
        for(int i=0;i<n;i++){
            val -= nums[i];
        }
        
        return val;
    }
};