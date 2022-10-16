class MyQueue {
    stack<int> stk;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        
        // TC :- O(N)
        // SC :- O(N)
        
        if(stk.empty())
            stk.push(x);
        else{
            stack<int> temp;
            
            while(!stk.empty()){
                temp.push(stk.top());
                stk.pop();
            }
            
            stk.push(x);
            
            while(!temp.empty()){
                stk.push(temp.top());
                temp.pop();
            }
        }
    }
    
    int pop() {
        if(stk.empty())
            return -1;
        
        int val = stk.top();
        stk.pop();
        
        return val;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */