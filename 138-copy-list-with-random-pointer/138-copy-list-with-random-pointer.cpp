/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node * curr =head;
        Node * front = head;
        
        
        while(curr){            
            front = curr->next;
            Node * temp = new Node(curr->val);
            curr->next =temp;
            temp->next = front;
            curr = front;
        }
        
        curr =head;
        
        while(curr){
            front = curr->next->next;
            if(curr->random)
                 curr->next->random = curr->random->next;
            else
                curr->next->random = nullptr;
            curr= front;
        }
        
        Node * newHead = new Node(0);
        Node * node = newHead;
        
        curr=head;
        
        while(curr){
            front= curr->next->next;
            node->next = curr->next;
            curr->next = front;
            node =node->next;
            curr = front;
        }
        
        return newHead->next;
    }
};