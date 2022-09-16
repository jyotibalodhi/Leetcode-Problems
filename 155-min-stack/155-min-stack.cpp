#define pii pair<int,int>

class MinStack {
    stack<pii> stk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int mini = val;
        
        if(!stk.empty())
            mini = min(stk.top().second,val);
        
        stk.push({val,mini});
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        if(stk.empty())
            return -1;
        
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */