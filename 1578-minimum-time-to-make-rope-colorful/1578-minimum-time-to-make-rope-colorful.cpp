class Solution {
public:

    
    int minCost(string str, vector<int>& nums) {
        
        // Greedy Algo
        
        int n = str.length();
      
        int i=0;
        int ans =0;
        
        while( i < n){
            int j = i+1;
            
            int sum = nums[i];
            int maxi = nums[i];
            
            while(j < n && str[i] == str[j]){
                sum += nums[j];
                maxi = max(maxi, nums[j]);
                j++;
            }
            ans += sum - maxi;
            i=j;
        }
        
        return ans;
        
    }
};