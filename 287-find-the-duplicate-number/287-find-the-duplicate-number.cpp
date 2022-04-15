class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int val;
        
        unordered_map<int,int> s(n-1);
        for(int i=0;i<=n;i++){
            s[nums[i]]++;
            if(s[nums[i]]>1){
                val= nums[i];
                break;
            }
        }

        return val;
    }
};