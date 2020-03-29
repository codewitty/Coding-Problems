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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* res(0);
        int data = l1->val + l2->val;
        while(l1 || l2) {
            if (carry == 0)
              res->val = data;
            else {
                res->val = l1->val + l2->val + 1;
                carry--;
            }
            if (data > 9) 
                carry = 1;
            l1 = l1->next;
            l2 = l2->next;
            res = res->next;
        }
       return res; 
    }
};
