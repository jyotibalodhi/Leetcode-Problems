class Solution {
public:
    int thirdMax(vector<int>& vec) {
        
        set <int> nums;
        
        for(int i=0;i<vec.size();i++){
            nums.insert(vec[i]);
        }
        
        priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int num : nums){
            pq.push(num);
            
            if(pq.size()>3) pq.pop();
        }
        
        if(pq.size()==3) return pq.top();
        else{
            while(pq.size()>1){
                pq.pop();
            }
        }
        
        return pq.top();
    }
};