class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        vector<int> res(n,-1);
        
        unordered_map<int, int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums1[i]] =i;
        }
        
        
        stack<int> stk;
        
        for(int i=nums2.size()-1;i>=0;i--){
            while(!stk.empty() && stk.top() <= nums2[i])
                stk.pop();
            
            if(!stk.empty() && stk.top()> nums2[i]){
                if(mp.find(nums2[i]) != mp.end()){
                    res[mp[nums2[i]]] = stk.top();
                }
            }
            
            stk.push(nums2[i]);
        }
        
        return res;
    }
};