class FreqStack {
public:
    stack<int> stk1, stk2;
    unordered_map<int,int> umap;
    FreqStack() {
        
    }
    
    int maxFreq(){
       int max_freq=0;
        for(auto i: umap){
            if(i.second >max_freq){
                max_freq= i.second;
            }
        }       
        return max_freq;
    }
    void push(int val) {
        umap[val]++;
        stk1.push(val);
    }
    
    int pop() {
        int val =stk1.top();
        int high = maxFreq();
        
        if(umap[val]==high){
            stk1.pop();
            umap[val]--;
        }
        else{
            while(umap[val]!= high){
                int temp = stk1.top();
                stk1.pop();
                stk2.push(temp);
                val=stk1.top();
            }
            
            if(umap[val]==high){
                stk1.pop();
                umap[val]--;
            }
            
            while(! stk2.empty()){
                int temp = stk2.top();
                stk2.pop();
                stk1.push(temp);
            }
        }
        
    return val;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */