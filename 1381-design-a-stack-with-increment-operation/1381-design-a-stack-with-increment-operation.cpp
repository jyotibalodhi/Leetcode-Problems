class CustomStack {
public:
    
    stack<int> stk1, stk2;
    int currSize =0, maxSize;
    CustomStack(int ms) {
        maxSize=ms;
        
    }
    
    void push(int x) {
        if(currSize==maxSize) return;
        stk1.push(x);
        currSize++;
        
    }
    
    int pop() {
        if(stk1.empty()) return -1;
        int val = stk1.top();
        stk1.pop();
        currSize--;
        return val;
    }
    
    void increment(int k, int val) {
        
        if(currSize > k){
           int tempSize=currSize-k;
            
            while(tempSize--)
            { 
                int temp =stk1.top();
                stk1.pop();
                stk2.push(temp);
            }
        }
        
        while(!stk1.empty()){
            
                int temp =stk1.top();
                stk1.pop();
                stk2.push(temp+val);
            }
        
          while(!stk2.empty()){
              
                int temp =stk2.top();
                stk2.pop();
                stk1.push(temp);
            }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */