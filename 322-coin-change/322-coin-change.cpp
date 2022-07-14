class Solution {
public:
    int coinChange(vector<int>& nums, int x) {
         int n = nums.size();

        vector<int> prev(x+1,0), curr(x+1,0);

        for(int i =0;i<=x;i++){
            if( i%nums[0]==0) 
                prev[i] = i/nums[0];
            else
                prev[i] = 1e9;
        }

        for(int i=1;i<n;i++){
            for(int j =0;j<= x;j++){
                int take = 1e9;
                if(j>= nums[i]){
                    take = 1 + curr[j- nums[i]];
                }
                int notTake = prev[j];

               curr[j]= min(take, notTake);
            }
            prev = curr;
        }

        int ans = prev[x];
        return ans>=1e9 ? -1 :ans;
    }
};