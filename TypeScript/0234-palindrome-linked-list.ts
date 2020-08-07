// 2020-08-05 17:33:18

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

function isPalindrome(head: ListNode | null): boolean {
  if (head == null || head.next == null) return true;
  let len = 0;
  let p: ListNode | null = head;
  for (; p != null; p = p.next) { len++; }

  let prev: ListNode | null = null;
  let cur: ListNode | null = head;
  for (let i = 0; i < Math.floor(len / 2); i++) { 
    let next: ListNode | null = cur!.next;
    cur!.next = prev;
    prev = cur;
    cur = next;
  }

  if (len % 2 == 1) cur = cur!.next;

  while (prev != null && cur != null) {
    if (prev.val != cur.val) return false;
    prev = prev.next;
    cur = cur.next;
  }
  return true;

};