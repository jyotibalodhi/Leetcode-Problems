class NumArray {
public:
    vector<int> vec;
    int sum=0;
    
    NumArray(vector<int>& nums){
        vec = nums;
        sum  = accumulate(nums.begin(),nums.end(),0);
        
    }
    
    void update(int index, int val){
        sum -=vec[index];
        vec[index] = val;
        sum += val;
    }
    
    int sumRange(int left, int right) {
        int res =sum;
        
        for(int i=0,j=vec.size()-1;i<left || j>right;i++,j--){
            if(i<left)
             res -= vec[i];
            if(j >right)
                res -= vec[j];
        }
        
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */