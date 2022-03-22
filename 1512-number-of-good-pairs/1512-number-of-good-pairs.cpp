class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int> freq;
        
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    
    int res = 0;
        for(auto i:freq) 
        {
            int n = i.second; 
            res += ((n)*(n-1))/2;
            
        }
    
    return res;
    
}
};