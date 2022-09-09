class Solution {
public:
    static bool cmp(vector<int> &v1, vector<int> &v2){
        if(v1[0] != v2[0])
            return v1[0] > v2[0];
        
        return v1[1] < v2[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& nums) {      
        
        sort(nums.begin(),nums.end(),cmp);
        int n = nums.size();
        
        int maxi = INT_MIN;
        int ans =0;
        
        for(int i=0;i<n;i++){
            if(nums[i][1] < maxi)
                ans++;
            else{
                maxi = nums[i][1];
            }
        }
        
        return ans;
    }
};