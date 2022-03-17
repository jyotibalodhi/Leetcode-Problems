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
    ListNode *newHead=NULL;
    ListNode *temp= new ListNode();
    ListNode* reverseList(ListNode* head) {
        if(!head) return newHead;
        
        if(newHead ==NULL){
            newHead=head;
            temp=head->next;
            newHead->next=NULL;
            head=temp;
        }
        else{
            head=head->next;
            temp->next=newHead;
            newHead=temp;
            temp=head;
        }
        
        reverseList(head);
        return newHead;
    }
};