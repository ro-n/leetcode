# 2020-08-05 14:47:46

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        len_ = 0
        if head is None or head.next is None:
            return True
        
        p = head
        while p is not None:
            len_ += 1
            p = p.next

        prev = None
        cur = head
        for i in range(len_ // 2):
            next_ = cur.next
            cur.next = prev
            prev = cur
            cur = next_

        if (len_ & 1) == 1:
            cur = cur.next

        while cur is not None and prev is not None:
            if cur.val != prev.val:
                return False
            cur = cur.next
            prev = prev.next

        return True
