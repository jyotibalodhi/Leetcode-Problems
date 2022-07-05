class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0 || nums.size()==1) return nums.size();
        
        unordered_set<int> s(nums.begin(),nums.end());
        
        
        int len=0, ans=0;
        
        for(int num :nums){
            if(s.find(num-1)== s.end()){  // only run if new sequence
                len =1;
                while(s.find(num+1) != s.end()){
                    len++;
                    num++;
                }

                ans = max(ans, len);
            }
        }
        
        return ans;
    }
};