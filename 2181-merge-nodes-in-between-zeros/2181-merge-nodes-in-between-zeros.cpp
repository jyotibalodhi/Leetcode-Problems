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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * newHead=head;
        ListNode * temp= head->next;
        int sum=0;
        
        while(temp){
            sum+= temp->val;
            temp=temp->next;
            
            if(temp->val == 0){
                head->val= sum;
                if(temp->next ==NULL)
                { 
                    head->next= NULL;
                    break;      
                }
                head=head->next;
                sum=0;
                temp=temp->next;
            }
        }

        return newHead;
    }
};