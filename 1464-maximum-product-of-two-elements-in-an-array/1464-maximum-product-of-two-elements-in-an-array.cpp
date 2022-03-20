class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max1 = INT_MIN;
        int pos;
        
        for(int i=0;i<n;i++){
            if(max1 < nums[i]) 
            {
                max1=nums[i];
                pos=i;
            }
        }
        
        int max2 = INT_MIN;
        
         for(int i=0;i<n;i++){
            if(max2 < nums[i] && pos!=i) max2=nums[i];
        }
        return (max1-1) * (max2-1);
    }
};