class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int i=0,j=n-1;
        int k=n-1;
        
        while(i<=j){
            int val1=pow(nums[i],2);
            int val2=pow(nums[j],2);
            
            if(val1>val2){
                res[k--]=val1;
                i++;
            }
            else{
                res[k--]=val2;
                j--;
            }
            
        }
        
        return res;
    }
};