# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        final_head = ListNode(-1)
        if len(lists) == 0:
            return None
        elif len(lists) == 1:
            return lists[0]
        
        final_list = lists[0]
        for i in range(1, len(lists)):
            prev = final_head
            l1 = final_list
            l2 = lists[i]
            if l1 and l2 == None:
                break
            while l1 and l2:
                if l1.val <= l2.val:
                    prev.next = l1
                    l1 = l1.next
                else:
                    prev.next = l2
                    l2 = l2.next
                prev = prev.next
                
            prev.next = l1 or l2
            prev = final_head.next
        return final_head.next
