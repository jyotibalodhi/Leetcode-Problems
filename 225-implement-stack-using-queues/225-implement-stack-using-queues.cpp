class MyStack {
public:
    queue<int> que;    
    
    MyStack() {
        
    }
    
    void push(int x) {  
        que.push(x);
    }
    
    int pop() {
        int size= que.size();
        while(size>1){
            int val= que.front();
            que.pop();
            que.push(val);
            size--;
        }
        int res= que.front();
        que.pop();
        return res;
    }
    
    int top() {
        int size= que.size();
        int val;
        while(size--){
            val = que.front();
            que.pop();
            que.push(val);
        }
        return val;
    }
    
    bool empty() {
        if(que.empty()) return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */