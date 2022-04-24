class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        
        int l=0,u=n-2;
        
        if(n==1) return 0;
        if(nums[0] >nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        
        
        while(l<=u){
            int mid =l+(u-l)/2;
            
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1]) u=mid-1;
            else l=mid+1;
        }
        
        return -1;
    }
};