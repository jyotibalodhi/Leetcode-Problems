class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        unordered_map<int,int> sum;
     
        for(int i=0;i<n;i++){
            int val= nums[i]+k;
            sum[val]++; 
        }
          for(int i=0;i<n;i++){

              if(sum.find(nums[i])!=sum.end())
              {  
                  if(k==0){
                      if(sum[nums[i]]>=2){
                          count++;
                          sum[nums[i]]=0;
                          continue;
                      }
                  }else{
                  {
                  sum.erase(nums[i]);
                  count++;
                  continue;}
              }
          }
          }
        return count;
    }
};