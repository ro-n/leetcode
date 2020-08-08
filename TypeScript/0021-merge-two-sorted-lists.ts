// 2020-08-08 01:39:44

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function mergeTwoLists(l1: ListNode | null, l2: ListNode | null): ListNode | null {
  const dummy: ListNode = {}  
  var p: ListNode = dummy

  while (l1 != null && l2 != null) {
    if (l1.val <= l2.val) {
      p.next = l1
      l1 = l1.next
      p = p.next
    } else {
      p.next = l2
      l2 = l2.next
      p = p.next
    }
  }

  if (l1 != null) {
    p.next = l1
  }
  
  if (l2 != null) {
    p.next = l2
  }

  return dummy.next
};