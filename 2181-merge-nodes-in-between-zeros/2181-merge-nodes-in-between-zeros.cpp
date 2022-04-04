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
        ListNode *node=new ListNode(-1, head);
        ListNode *temp=head;
        
        int sum=0;
        
        while(temp->next){
            temp=temp->next;
            node=node->next;
            sum=0;
            
            while(temp->val!=0){
                sum+= temp->val;
                temp=temp->next;
            }
            node->val =sum;
        }
        node->next =NULL;
        return head;
    }
};