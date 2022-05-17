class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0 || nums.size()==0 || nums.size()==1 || k==nums.size()) 
            return;
        
        int n=nums.size();
        
        while(k>n){
            k -=n;
        }
        
        if(k == n ) return;
        
        int i =n-k;
        
        reverse(nums.begin(),nums.begin()+i);
        reverse(nums.begin()+i, nums.end());
        
        reverse(nums.begin(),nums.end());
        
        return;
    }
};