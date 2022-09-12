class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power) {
        
        int n = nums.size();
        if(n==0)
            return 0;
        
        
        sort(nums.begin(),nums.end());
        
        int ans =0;
        int cnt =0;
        
        int i=0;
        int j = n-1;
        
        
        while(i<=j){
            if(nums[i] <= power){
                cnt++;
                power = power - nums[i];        //face up
                i++;
            }
            else if(cnt >0){
                cnt--;
                power = power + nums[j];        //face down
                j--;
            }
            else{
                ans = max(ans, cnt);
                return ans;
            }
            
            ans = max(ans, cnt);
        }
        
        return ans;
        
    }
};