class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen=0;
        int len=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) len++;
            else len=0;
            
            maxlen=max(len, maxlen);
        }
        
        return maxlen;
    }
};