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
    int getDecimalValue(ListNode* head) {
        int count=0,dig=0, dec=0;
        ListNode * temp=head;
        
        // counting no of nodes
        while(temp !=NULL){
            count++;    
            temp=temp->next;
        } 
        temp=head;
        count--;
        
        //calculating binary to decimal
        
        while(count>=0){
            dig=  temp->val * pow(2,count--); 
            dec=dec+dig;     
            temp=temp->next;
        }
        
        return dec;
    }
    
};