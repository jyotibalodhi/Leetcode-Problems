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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        
        vector<int> res;
        
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        
        sort(res.begin(),res.end());
        
        ListNode * node =new ListNode(res[0]);
        ListNode * curr=node;
        for(int i=1;i<res.size();i++){
        ListNode * temp =new ListNode(res[i]);
            curr->next=temp;
            curr=curr->next;
        }
        return node;
    }
};