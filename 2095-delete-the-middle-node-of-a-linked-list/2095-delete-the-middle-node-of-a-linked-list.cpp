/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        
        ListNode *f=head;
        ListNode *s=new ListNode(-1, head);
        
        while(f!=NULL && f->next !=NULL){
            f= f->next->next;
            s=s->next;
        }
        
        s->next = s->next->next;
        return head;
    }
};