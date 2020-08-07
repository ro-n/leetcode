// 2020-08-04 23:09:28

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        int len = 0;
        for (ListNode p = head; p != null; p = p.next, ++len);

        ListNode cur = head, prev = null;
        for (int i = 0; i < len / 2; ++i) {
            ListNode next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }

        if ((len & 1) == 1) cur = cur.next;
        for (; prev != null && cur != null; prev = prev.next, cur = cur.next) {
            if (prev.val != cur.val) return false;
        }
        return true;
    }
}
