class LNode{
    public:
    string val;
    LNode * next;
    LNode(){
        val="";
        next=NULL;
    }
    LNode(string s){
        val=s;
        next=NULL;
    }
};

class BrowserHistory {
public:
    LNode * head=new LNode();
    LNode * curr=head;
    int size;
    BrowserHistory(string homepage) {
        head->val= homepage;
        size=1;
    }
    
    void visit(string url) {
        LNode * node=new LNode(url);
        curr->next=node;
        curr=curr->next;
        size++;
    }
    
    string back(int steps) {
        int temp=steps;
        if(steps>size-1){
            size=1;
            curr=head;
            return head->val;
        }
        int x= size-steps;
        string res="";
        LNode *node=head;
        while(x>1){
            node=node->next;
            x--;
        }
        curr=node;
        res+=node->val;
        while(temp--) size--;
        return res;
    }
    
    string forward(int steps) {
        while(curr->next && steps!=0){
            curr=curr->next;
            size++;
            steps--;
        }
        
        string res="";
        res+= curr->val;
        return res;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */