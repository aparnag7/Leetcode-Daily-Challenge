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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* prev =NULL;
         ListNode* n1 = l1;
         ListNode* n2 = l2;
         int carry=0, res=0;
         while(n1 && n2) {
             res = (n1->val + n2->val) +carry;
             carry = res/10;
             n2->val = res%10;
             prev = n2;
             n2=n2->next;
             n1=n1->next;
         }
        while(carry || n1) {
            if(!n1 && !n2) {
                 ListNode* n = new  ListNode(carry);
                prev->next = n;
                carry=0;
            }
            else if(n1) {
                res = carry + n1->val;
                ListNode* n =new  ListNode(res%10);
                prev->next = n;
                carry = res/10;
                prev = n;
                n1 = n1->next;
            }
            else if(n2) {
                res = carry + n2->val;
                n2->val = res % 10;
                carry = res / 10;
                prev = n2;
                n2 = n2->next; 
            }
            
        }
        return l2;
    }
};
