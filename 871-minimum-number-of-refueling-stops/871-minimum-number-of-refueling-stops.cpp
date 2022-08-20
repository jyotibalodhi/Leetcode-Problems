class Solution {
public:
    int minRefuelStops(int target, int fuel, vector<vector<int>>& nums) {
        
         int n = nums.size();
        
        priority_queue<int> pq; 
        
        int curr = fuel; 
        int i = 0; 
        int result = 0;
        
        while(curr < target) {
            while(i < n && curr >= nums[i][0]) {
               
                pq.push(nums[i][1]);
				
                i++;
            }
            
            if(pq.empty()) 
                return -1;
            
            int dist = pq.top();
            pq.pop();
            
            curr += dist;
            result++;
        }
        
        return result;
    }
};