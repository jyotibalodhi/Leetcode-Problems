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
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
       
        if(!ha || !hb) return nullptr;
        
        ListNode * a =ha;
        ListNode * b= hb;
        
        while(a !=b){
            if(a==b) return a;
            
            if(!a) a= hb;
            else a= a->next;
            
            if(!b) b=ha;
            else b =b->next;
        }
        
        return a;
    }
};