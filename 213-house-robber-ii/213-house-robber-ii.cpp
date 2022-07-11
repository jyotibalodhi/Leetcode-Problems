class Solution {
public:
    int solve(vector<int> arr){
        
        int prev = arr[0];
        int prev2= 0;
        
        for(int i=1;i<arr.size();i++){
            int rob = arr[i] +prev2;
            
            int notRob = prev;
            
            int curr = max(rob, notRob);
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
    
    int rob(vector<int>& nums) {
    
        if(nums.size()==1) return nums[0];  //edge case of only 1 element
        
        vector<int> temp(nums.begin()+1,nums.end()); // array from 1to n-1 index
        nums.pop_back();  // array from 0 to n-2 index
        
        return max(solve(temp) , solve(nums));
    }
};