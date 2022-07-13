class Solution {
public:
     void dfs(vector<int> &left, vector<vector<int>> &leftSumLen, int len, int currSum, int i) {
        if(i >= left.size()) {
            leftSumLen[len].push_back(currSum);
            return;
        }
        
        dfs(left, leftSumLen, len + 1, currSum + left[i], i + 1);
         
       
        dfs(left, leftSumLen, len, currSum, i + 1);
    }
    int minimumDifference(vector<int>& nums) {
        
        
        int n = nums.size() / 2;
        vector<int> left;
        vector<int> right;
        int totalSum = 0;
        
        for(int i = 0; i < n; i++) {
            left.push_back(nums[i]);
            totalSum += nums[i];
        }
        for(int i = n; i < nums.size(); i++) {
            right.push_back(nums[i]);
            totalSum += nums[i];
        }
        int sum = totalSum / 2;
        

        vector<vector<int>> leftSumLen(n + 1, vector<int> ());
        vector<vector<int>> rightSumLen(n + 1, vector<int> ());
        
        dfs(left, leftSumLen, 0, 0, 0);
        dfs(right, rightSumLen, 0, 0, 0);
       
        for(int i = 0; i < rightSumLen.size(); i++) {
            sort(rightSumLen[i].begin(), rightSumLen[i].end());
        }
        
        int minDiff = INT_MAX;
        
    
        for(int i = 0; i <= n; i++) {
            
            for(auto firstHalfSumLeft: leftSumLen[i]) {
                
                int reqSecondHalfSumLeft = sum - firstHalfSumLeft;
                int found_idx = lower_bound(rightSumLen[n - i].begin(), rightSumLen[n - i].end(), reqSecondHalfSumLeft) - rightSumLen[n - i].begin();
                
                if(found_idx == rightSumLen[n - i].size()) found_idx--;
                
                int leftHalfSum = firstHalfSumLeft + rightSumLen[n - i][found_idx];
                int rightHalfSum = totalSum  - leftHalfSum;
                
                int diff = abs(leftHalfSum - rightHalfSum);
                
                minDiff = min(minDiff, diff);
                
            }
        }
        return minDiff;
    }
};