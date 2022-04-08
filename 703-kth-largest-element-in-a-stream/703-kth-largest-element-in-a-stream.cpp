class KthLargest {
    int kth;
    vector<int> arr;
    priority_queue <int, vector<int>, greater<int> > pq;
    
public:
    KthLargest(int k, vector<int>& nums) {
        kth =k;
        arr = nums;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        arr.push_back(val);
        pq.push(val);
        if(pq.size()>kth) pq.pop();
        
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */