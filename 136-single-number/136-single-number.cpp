class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]==nums[i]){
                swap(nums[i],nums[j+1]);
                j+=2;
                i=j;
            }
        }
        return nums[j];
    }
};