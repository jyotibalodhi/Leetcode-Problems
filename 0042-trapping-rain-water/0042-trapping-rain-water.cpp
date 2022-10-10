class Solution {
public:
    int trap(vector<int>& nums) {
        
        int n = nums.size();
        
        int l =0;
        int r = n-1;
        
        int maxL = 0;
        int maxR = 0;
        
        int water = 0;
        
        while(l<= r){
            
            if(nums[l] <= nums[r]){
                if(nums[l] >= maxL){
                    maxL = max(maxL, nums[l]);
                }
                else{
                    water += maxL - nums[l];
                }
                
                l++;
            }
            else{
                if(nums[r] >= maxR){
                    maxR = max(maxR, nums[r]);
                }
                else{
                    water += maxR - nums[r];
                }
                
                r--;
            }
        }
        
        return water;
        
    }
};