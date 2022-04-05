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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0,sum=0;
        ListNode *newHead =NULL;
        ListNode * curr=newHead;
        
        while(l1!=NULL || l2!= NULL){
            int val1 = l1 ? l1->val :0;
            int val2 = l2 ? l2->val :0;
            
            sum= carry + val1+ val2;
            
            carry=sum/10;
            sum=sum%10;
            
            if(!newHead){
                newHead =new ListNode(sum);
                curr=newHead;
            }
            else{
                ListNode * node=new ListNode(sum);
                curr->next = node;
                curr=curr->next;
            }
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        
        if(carry!=0)
        {
            ListNode * node=new ListNode(carry);
                curr->next = node;
                curr=curr->next;
            
        }
        
        
        
        return newHead;
        
    }
};