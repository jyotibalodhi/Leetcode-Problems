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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode * first =NULL;
        ListNode * second =NULL;
        ListNode * temp=head;
        
        while(temp){
            count++;
            temp=temp->next;
        }
        
        temp=head;
        for(int i=1;i<=count;i++){
            if(i==k){
                first =temp;
            }
            if(i== count-k+1){
                second =temp;
            }
            temp=temp->next;
        }
        
        int val= second->val;

        second->val =first->val;

        first->val =val;
 
        
        
        return head;
    }
};