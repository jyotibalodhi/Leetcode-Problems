class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small=0,count=0,k=0;
        
        for(auto n:nums) {
            if(n<target)    small++;                                   
            if(n==target)   count++;                                   
        }
        
        vector<int> res(count);
        for(int i=small;i<small+count;i++)      
            res[k++]=i;
        return res;
    }
};