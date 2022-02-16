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

    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)  return head;
        ListNode *newHead=head;
        ListNode* prev=head;
        ListNode* curr= head->next;
        
        if(curr->next!=NULL){
            prev->next= curr->next;
            curr->next=prev;
            newHead=curr;
            curr=prev->next;
        }
        else{
            curr->next=prev;
            prev->next=NULL;
            newHead=curr;
            return newHead;
        }
        
        while(curr!= NULL){
            if(prev->next->next== NULL){
                return newHead;
            }
          
            
            prev->next=curr->next;
            ListNode* temp= curr->next->next;
            curr->next->next= curr;
            curr->next=temp;
            prev=curr;
            curr=curr->next;
        }
    return newHead;
    }
};