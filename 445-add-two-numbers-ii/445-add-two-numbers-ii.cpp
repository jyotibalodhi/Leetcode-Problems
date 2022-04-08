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
    void reverse(ListNode * &head){
        ListNode * node = nullptr;
        ListNode * temp = head;
        while(temp){
            head= temp;
            temp= temp->next;
            head->next= node;
            node= head;
        }   
    } 
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverse(l1);
        reverse(l2);
        
        ListNode * l3=nullptr;
        ListNode * curr;
        
        int sum=0, c=0;
        
        while(l1 || l2){
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            
            int sum= val1+ val2+c;
            c = sum/10;
            sum= sum%10;
            
            ListNode * node = new ListNode(sum);
            if(!l3){
                l3= node;
                curr= l3;
             }
            else{
                curr->next= node;
                curr= curr->next;
            }
            if(l1) l1= l1->next;
            if(l2) l2= l2->next;      
        }
        
        if(c) {
            ListNode * node = new ListNode(c); 
            curr->next= node;
        }
        
        reverse(l3);
        return l3;
    }
};