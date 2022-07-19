class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int start =0, maxLen =0,zero=0;
        int n= nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero ++;
            }
            if(zero >k){
               while(zero>k){
                 if(nums[start]==0){
                     zero--;
                 }
                 start++;
             }
            }
            
            maxLen = max(maxLen, i-start+1);
        }
        
        return maxLen;
    }
};