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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* newhead = new ListNode(0);
        newhead->next = head;
        ListNode* prev = newhead; //last node with no duplicates
        ListNode* curr = head;
        while(curr) {
        while(curr->next && prev->next->val == curr->next->val) 
            curr = curr->next;
        // if curr has unique value hence curr is not updated,  
        if(prev->next==curr) 
            prev = prev->next;
        else 
            prev->next=curr->next;
        curr = curr->next;
        }
        head= newhead->next;
        return head;
    }
};
