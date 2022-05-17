class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        
        set<vector<int>> s;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){
            
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                // if(nums[i]==0 && nums[j]==0 && nums[k]==0){
                //      vector<int> temp{nums[i],nums[j],nums[k]};
                //      s.insert(temp);
                //     j++;
                //     k--;
                //     continue;
                // }
                if(nums[i] + nums[j] +nums[k] == 0) 
                {
                    vector<int> temp{nums[i],nums[j],nums[k]};
                    s.insert(temp);
                    if(nums[j+1] == nums[j])
                        while(j<k && nums[j+1] == nums[j]) j++;
                    else
                        j++;
                    if(nums[k-1] == nums[k])
                        while(j<k && nums[k-1] == nums[k]) k--;
                    else
                        k--;

                }
                else if(nums[i] + nums[j] +nums[k] < 0){
                   j++;
                }
                else{
                    
                        k--;
                }
            }
        }
        
        vector<vector<int>> res(s.begin(),s.end());
        return res;
    }
};