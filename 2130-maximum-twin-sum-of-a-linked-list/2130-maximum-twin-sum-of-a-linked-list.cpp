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
    int pairSum(ListNode* head) {
        ListNode *prev=head, *curr=head;
        int count=0, max=0,sum=0;
        
        //getting length of linked list
        while(curr){
            count++;
            curr=curr->next;
        }
        
        count= count/2-1;
        while(count>0){
            prev=prev->next;
            count--;
        }
        curr= prev->next;
        prev->next= NULL;  // splitting linked list into half
        
        ListNode * newHead =NULL;
        while(curr){
            ListNode *next=curr->next;
            curr->next=newHead;
            newHead=curr;
            curr=next;     
        }
  
        
        while( newHead && head){
              
               sum= newHead->val + head->val;
            
            if(sum> max)  max= sum;
            newHead= newHead->next;
            head=head->next;
        }
        return max;
    }
};