class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub=0;
        int maxim =nums[0];
        
        for(int i=0;i<nums.size();i++){
            maxSub += nums[i];
            if(maxim<maxSub){
                maxim=maxSub;
            }
            if(maxSub<0){
                maxSub=0;
            }
        }
        return maxim;
    }
};