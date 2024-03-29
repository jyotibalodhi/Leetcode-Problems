class MyCircularQueue {
    vector<int> arr;
    int front =0;
    int rear =0;
    int k=0;
    int arrSize =0;
    
public:
    MyCircularQueue(int size) {
        arr.resize(size);      
        arrSize = size;
    }
    
    bool enQueue(int value) {
        if(isFull()){  // queue full
            return false;
        }
        
        if(isEmpty()){  // first element
            front = 0;
            rear = 0;
            k++;
            arr[rear] = value;
            
            return true;
        }
        
        rear =(rear + 1)%arrSize;
        arr[rear] = value;
        k++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())   // empty queue
            return false;
       
        front = (front+1)%arrSize;
        k--;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        
        return arr[rear];
    }
    
    bool isEmpty() {
        return k==0;
    }
    
    bool isFull() {
        return k == arrSize;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */