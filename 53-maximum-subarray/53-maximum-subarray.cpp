class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ///Kadane's Algorithm
        int max_sum_end =0, max_sum = INT_MIN;
        for(int i=0; i<nums.size();i++){
            max_sum_end =max_sum_end+nums[i];
            if(max_sum_end>max_sum){
                max_sum=max_sum_end;
            }
            if(max_sum_end<0){
                max_sum_end=0;
            }
        }
        
        return max_sum;
    }
};