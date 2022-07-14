class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int d) {
        int n = nums.size();
        int totSum=0;

        for(int i=0;i<n;i++) totSum += nums[i];

        // s1 - s2 = d
        //s1 ---> totSum -s2
        //totSum - 2s2 = d
        //s2 =( totSum-d)/2

        if((totSum -d)%2 || (totSum -d) <0) return 0;

        int tar = (totSum-d)/2;

        vector<int> prev(tar+1,0);

        if(nums[0]==0) prev[0]=2;
        else
            prev[0] =1;

        if(nums[0] != 0 && nums[0] <=tar)  prev[nums[0]] = 1;

        for(int i=1;i<n;i++){
                vector<int> curr(tar+1,0);

            for(int j=0;j<=tar;j++){
                int take =0;
                if(nums[i] <=j)
                   take = prev[j-nums[i]];

                int notTake = prev[j];
                curr[j] = (take + notTake);
            }

            prev = curr;
        }

        return prev[tar];
        }
};