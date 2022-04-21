class MyHashSet {
public:
    ListNode * head;
    MyHashSet() {
        head = new ListNode(-1);
    }
    
    void add(int key) {
        if(head->val ==-1){
            head->val =key;
        }
        else{
            ListNode * temp=head;
            ListNode * prev=head;
            
            while(temp){
                if(temp->val== key) return;
                else{
                    prev=temp;
                    temp=temp->next;
                } 
            }
            ListNode *node =new ListNode(key);
                prev->next=node;
        }
        
       
    }
    
    void remove(int key) {
        if(!head) return;
        if(head->val ==key){
            head=head->next;
        }
        else
        {
             ListNode * temp=head;
            while(temp->next){
                if(temp->next->val== key){
                    
                    if(temp->next->next!=NULL)
                   { 
                    temp->next = temp->next->next;
                    return;
                   }
                    else{
                        
                    temp->next = NULL;
                    return;
                    }
                }
                else{
                    temp=temp->next;
                }
        }
    }
    }
    
    bool contains(int key) {
        if(!head) return false;
         ListNode * temp=head;
            while(temp){
                if(temp->val==key) return true;
                temp=temp->next;
            }
        
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */