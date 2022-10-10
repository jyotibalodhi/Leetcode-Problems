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
        
        
        ListNode * a = headA;
        ListNode * b = headB;
        int cnt = 2;
        
        while(a != b && cnt >= 0){
            if(a)
                a = a->next;
            else{
                a = headB;
                cnt--;
            }
            
            if(b)
                b = b->next;
            else{
                b = headA;
                cnt--;
            }
        }
        
        if(cnt < 0)
            return NULL;
        
        return a;
    }
};