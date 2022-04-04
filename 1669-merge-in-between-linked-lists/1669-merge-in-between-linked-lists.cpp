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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode *temp=l2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        ListNode * start=l1;
        ListNode * end=l1;
        
        int c1=1;
        while(c1<a){
                start=start->next;
            c1++;
        }
        
        int c2=1;
         while(c2<=b){
                end=end->next;
             c2++;
        }

        start->next=l2;
        temp->next=end->next;
        
        return l1;
    }
};