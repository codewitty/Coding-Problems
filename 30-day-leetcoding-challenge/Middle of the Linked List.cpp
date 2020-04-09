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
    ListNode* middleNode(ListNode* head) {
        ListNode * res = head;
        int count = 0;
        ListNode * curr = head;
        while (curr) {
            curr = curr->next;
            count++;
        }
        
        count/=2;
        for(int i = 0; i < count; ++i) {
            res = res->next;
        }
        return res;
    }
};
