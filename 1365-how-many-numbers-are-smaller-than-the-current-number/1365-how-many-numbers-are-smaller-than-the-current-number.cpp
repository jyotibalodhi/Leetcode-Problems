class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        vector<int> res(nums.size());
        
        arr =nums;
        sort(arr.begin(),arr.end());
        
        int n= nums.size();
        
        for( int i=0; i<n;i++){
            int j = n-1;
            while(arr[j]>= nums[i]){
                j--;
                if(j==0 && arr[j]>= nums[i] ){
                    j=-1;
                    break;
                }
            }
            res[i]=j+1;
        }
        
        return res;
    }
};