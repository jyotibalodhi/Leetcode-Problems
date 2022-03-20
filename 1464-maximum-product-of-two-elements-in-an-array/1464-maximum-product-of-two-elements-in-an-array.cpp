class Solution {
public:
    int maxProduct(vector<int>& nums) {
       priority_queue<int> pq{nums.begin(), nums.end()};
        
        int max= pq.top()-1;
        pq.pop();
        max*= pq.top()-1;
        
        
        return max;
    }
};