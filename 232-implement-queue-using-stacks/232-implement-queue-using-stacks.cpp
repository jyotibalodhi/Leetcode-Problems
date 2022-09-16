class MyQueue {
    stack<int> stk1;
    stack<int> stk2;
    int front;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(stk1.empty()){
            front =x;
        }
        
        stk1.push(x);
    }
    
    int pop() {
        if(stk1.empty())
            return -1;
        int val =-1;
        
        while(!stk1.empty()){
            val = stk1.top();
            stk1.pop();
            stk2.push(val);
        }
        
        stk2.pop();
        if(!stk2.empty())
            front = stk2.top();
        
        while(!stk2.empty()){
            int num = stk2.top();
            stk2.pop();
            stk1.push(num);
        }
        
        return val;
        
    }
    
    int peek() {
        if(stk1.empty())
            return -1;
        return front;
    }
    
    bool empty() {
        return stk1.empty();
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