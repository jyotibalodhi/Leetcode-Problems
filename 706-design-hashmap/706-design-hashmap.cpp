class LNode{
    public:
    int key;
    int val;
    LNode* next;
    
    LNode(){
        key=-1;
        val=-1;
        next=NULL;
    }
      
    LNode(int x, int y){
        key=x;
        val=y;
        next=NULL;
    }
};

class MyHashMap {
public:
    LNode * hmap= NULL;
    MyHashMap() {
        hmap = new LNode();
    }
    
    void put(int key, int value) {
        if(hmap->key==-1 ){
            hmap->key = key;
            hmap->val=value;
            return;
        }
        
        LNode* temp=hmap;
        
        while(temp->next!= NULL){
            if(temp->key ==key) {
                temp->val =value;
                return;
            }
            temp=temp->next;
        }
        
        if(temp->key==key) {
            temp->val=value;  
             return;
        } 
        LNode * node= new LNode(key, value);
        temp->next=node;
    }
    
    int get(int key) {
        if(hmap->key ==-1) return -1;
        LNode* temp=hmap;
        
        while(temp!= NULL){
            if(temp->key ==key) return temp->val;
            temp=temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        if(hmap->key==key){
            if(hmap->next)
             hmap=hmap->next;
            else
                hmap= new LNode();
            return;
        }
        
     LNode* prev=hmap, *curr=hmap->next;
     while (curr && curr->key != key)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr)
        {
            prev->next = curr->next;
            delete curr;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */