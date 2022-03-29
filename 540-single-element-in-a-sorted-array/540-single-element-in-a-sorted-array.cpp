class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int u=nums.size()-1;
        
        while(l<=u){
            int mid = l +(u-l)/2;
            
            if(mid ==0 || mid==nums.size()-1)  return nums[mid];
            
            if(nums[mid]== nums[mid-1] || nums[mid]==nums[mid+1]){
                if(nums[mid]== nums[mid-1]){
                    if((mid-1-l)%2 != 0) u=mid-2;
                    else{
                        l=mid+1;
                    }
                }
                else if(nums[mid]== nums[mid+1]){
                    if((mid-l)%2 != 0) u=mid-1;
                    else{
                        l=mid+2;
                    }
                }
            }
            else
                return nums[mid];
            
        }
        
        return -1;
    }
};