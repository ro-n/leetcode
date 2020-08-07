// 2020-08-07 16:45:47

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func isPalindrome(head *ListNode) bool {
	if head == nil {
		return true
	}
	len := 0
	cur := head
	for cur != nil {
		cur = cur.Next
		len++
	}

	var prev *ListNode = nil
	cur = head
	for i := 0; i < len/2; i++ {
		next := cur.Next
		cur.Next = prev
		prev = cur
		cur = next
	}

	if len%2 == 1 {
		cur = cur.Next
	}

	for prev != nil && cur != nil {
		if prev.Val != cur.Val {
			return false
		}
		prev = prev.Next
		cur = cur.Next
	}
	return true
}