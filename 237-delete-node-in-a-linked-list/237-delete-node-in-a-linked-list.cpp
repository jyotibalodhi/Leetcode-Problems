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
    void deleteNode(ListNode* node) {
        ListNode * prev = node;
        ListNode * curr = node->next;
        while(curr->next){
            prev->val = curr->val;
            prev=prev->next;
            curr=curr->next;
        }
        prev->val=curr->val;
        prev->next =NULL;
    }
};