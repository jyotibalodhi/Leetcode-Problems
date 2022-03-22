class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int> freq;
        
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    
    int res = 0;
    
    for(int i=0;i<nums.size();i++){
        if(freq[nums[i]]>1){
            res +=freq[nums[i]] -1;
            freq[nums[i]]--;
        }
    }
    
    return res;
    
}
};