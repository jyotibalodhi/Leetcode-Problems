#define lli long long int

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        lli n = nums.size();
        
        lli sum = n*(n+1)/2;
        lli product =  (n* (2*n + 1)*(n+1))/6;
        
        for(int i=0;i<n;i++){
            sum -= (lli)nums[i];
            product -= (lli)nums[i]*nums[i];
        }
        
        int missing_no = (sum + product/sum)/2;
        
        int repeating_no = missing_no - sum;
        
        return {repeating_no, missing_no};
    }
};