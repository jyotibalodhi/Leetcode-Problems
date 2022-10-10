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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || k ==0)
            return head;
        
        int n =0;
        ListNode * fast = head;

        while(fast){
            fast = fast->next;
            n++;
        }
        
        k = k%n;
        if(k == 0)
            return head;
  
        fast = head;
        ListNode * slow = head;
        
        
        // find kth element from back
        while(k--){
            fast = fast->next;
        }
        
        
        while(fast && fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        
        fast->next = head;
        ListNode * newHead = slow->next;
        slow->next = NULL;
        
        
        return newHead;
        
        
    }
};