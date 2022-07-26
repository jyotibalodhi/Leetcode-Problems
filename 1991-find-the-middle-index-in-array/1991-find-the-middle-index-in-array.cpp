class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int lsum=0;
        int rsum=0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            rsum += nums[i];
        }
        
        for(int i=0;i<n;i++){
            rsum -= nums[i];   // as the element itself is not counted in the sum
            if(lsum ==rsum) return i;
            lsum += nums[i];
        }
        
        return -1;
    }
};