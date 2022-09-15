class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
       
        int n = nums.size();
        
        if(n%2 == 1)
            return {};   
        
        vector<int> res;
        unordered_map<int,int> mp;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        
        for(int i=0;i<n;i++){
            if(mp[nums[i]] > 0){
                int doub = nums[i]*2;
                
                if(mp[doub] >0){
                    res.push_back(nums[i]);
                    
                    mp[nums[i]]--;                   
                    mp[doub]--;
                                
                }else{
                    return {};
                }
            }         
        }        

        return res;
    }
};