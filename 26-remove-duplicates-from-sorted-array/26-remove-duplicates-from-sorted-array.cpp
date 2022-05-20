class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0, h=0;

        int n=nums.size();
        
        while(h<n){
            if(nums[h]==nums[l]) h++;
            else{
                swap(nums[l+1],nums[h]);
                l++;
                h++;
            }
        }

        return l+1;
    }
};