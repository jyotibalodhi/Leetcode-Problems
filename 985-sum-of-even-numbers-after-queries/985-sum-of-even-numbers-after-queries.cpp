class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        
        int sum =0;           // initial sum of even numbers in nums
        
        
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0)
                sum += nums[i];
        }
        
        
        vector<int> res;
        int q = queries.size();
       
        for(int i=0;i<q;i++){
            int ind = queries[i][1];
            int val = queries[i][0];
            
            if(nums[ind] % 2 == 0){
                sum -=nums[ind];
            }
            
            nums[ind] = val + nums[ind];
            if(nums[ind] % 2 == 0){
                sum += nums[ind];
            }
            
            res.push_back(sum);
        }
        
        return res; 
    }
};