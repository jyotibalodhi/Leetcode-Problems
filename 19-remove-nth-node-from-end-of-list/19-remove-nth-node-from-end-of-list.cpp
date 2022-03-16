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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = new ListNode();
        temp->next = head;
        ListNode *fast=head;
        ListNode *slow=temp;
        int count=0;
        while(fast->next != NULL){
            count++;
            if(count>=n){
             slow=slow->next;
            }
            fast=fast->next;
        }
        slow->next = slow->next->next;
        
        return temp->next;
    }
};