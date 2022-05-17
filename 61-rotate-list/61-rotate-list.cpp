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
        if(!head || !head->next ||k==0) return head;
        
        ListNode * fast =head;
        ListNode * slow = fast;
        
       
       
        ListNode *temp = head;
        int n=0;
        while(temp){
            n++;   //length of linked list
            temp =temp->next;
        }
        
        
        while(k >n) k -= n;
         if(k==n) return head;

         int i=k;
        while(i--){
            fast= fast->next;
        }
        
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        
        
        
        fast->next = head;
        ListNode *node =slow->next;
        slow->next = nullptr;
        
        return node;
    }
};