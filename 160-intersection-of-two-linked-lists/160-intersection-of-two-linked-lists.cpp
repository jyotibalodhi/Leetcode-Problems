/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ha = headA;       
        ListNode *hb = headB;

        
        while(ha != hb){
            if(ha) ha= ha->next;
            else
                ha = headB;
            
            if(hb) hb = hb->next;
            else
                hb = headA;
        }
        
        return ha;
    }
};