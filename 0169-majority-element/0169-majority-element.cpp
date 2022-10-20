class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int res = nums[0];
        int cnt =0;
        
        int n = nums.size();
        int i=0;
        
        while(i < n ){
            if(cnt == 0)
            {
                res = nums[i];
            }
            if(res == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
            
            i++;
        }
        
        
        return res;
    }
};