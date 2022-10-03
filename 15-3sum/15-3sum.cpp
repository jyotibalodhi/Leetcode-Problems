class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        
        // as we do not require indexes we can sort the given array
        // fix one number and apply binary search for next 2
        
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
//         if(n < 3)                  // handled by constraints
//             return {};
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){

                int l= i+1;
                int h = n-1;

                while(l <h){
                    long sum = nums[i] + nums[l] + nums[h];
                    int mid = l +(h-l/2);


                    int numl = nums[l];
                    int numh = nums[h];

                    if(sum == 0){
                        ans.push_back({nums[i],nums[l],nums[h]});

                        while(l < h && nums[l] == numl)   
                            l++;

                        while(h > l && nums[h] == numh)  
                            h--;

                    }
                    else if( sum < 0){
                         while(l < h && nums[l] == numl)   
                            l++;
                    }
                    else{
                        while(h > l && nums[h] == numh)  
                            h--;
                    }       
                }
            
            while(i+1 <n && nums[i+1] == nums[i])
                i++;
        }
        
        
        return ans;
        
    }
};