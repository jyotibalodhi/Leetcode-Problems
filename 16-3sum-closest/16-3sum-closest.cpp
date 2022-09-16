class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        // O(nlogn)
        sort(nums.begin(),nums.end());
        
        int sum = INT_MAX;     
        int diff = INT_MAX;      // as we need min difference
        
        
        // O(nlogn)
        for(int i=0;i<n;i++){
            
            if(i==0 || nums[i] != nums[i-1]){
                int l = i+1;
                int h = n-1;

                while(l<h){
                    int temp = nums[i] + nums[l] + nums[h];

                    if(temp == target)
                        return temp;
                    else if(temp < target){
                        l++;
                    }
                    else{
                        h--;
                    }
                    
                    if(abs(target - temp) < diff){
                        sum = temp;
                        diff = abs(target - temp);
                    }
                }
            }
        }
        
        return sum;      
    }
};