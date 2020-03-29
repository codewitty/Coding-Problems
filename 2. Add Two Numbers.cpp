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
        ListNode ans(0);
        ListNode *res = &ans;
        
        while(l1 || l2 || carry) {
            int data = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            res->next = new ListNode(data%10);
            carry = data/10;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
            res = res->next;
        }
       return ans.next; 
    }
};
