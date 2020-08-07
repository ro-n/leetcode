// 2020-08-05 17:28:47

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

function reverseList(head: ListNode | null): ListNode | null {
  let prev = null;
  let cur = head;
  if (head == null) { return cur; }

  while (cur != null) { 
    let next = cur.next;
    cur.next = prev;
    prev = cur;
    cur = next
  }
  return prev;
};
