class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int val;
       int count=0;
        for(int i=0;i<n; i++){
            if(count==0)
                val=nums[i];
            if(nums[i]==val)
                count++;
            else
                count--;
        }
        
        return val;
    }
};