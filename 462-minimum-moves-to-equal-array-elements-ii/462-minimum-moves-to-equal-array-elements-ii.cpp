class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int mid = nums.size()/2;
        int midVal = nums[mid];
        
        int cnt =0;
        
        for(int i=0;i<mid;i++){
            cnt += midVal - nums[i];
        }
        
        for(int i= mid+1;i<nums.size();i++){
            cnt += nums[i] - midVal;
        }
        
        return cnt;
        
    }
};