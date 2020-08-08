# 2020-08-08 00:42:47

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode(0)
        p = dummy

        while l1 is not None and l2 is not None:
            if l1.val >= l2.val:
                p.next = l2
                p = p.next
                l2 = l2.next
            else:
                p.next = l1
                p = p.next
                l1 = l1.next
        
        if l1 is not None:
            p.next = l1
        if l2 is not None:
            p.next = l2

        return dummy.next
