// 2020-08-07 21:08:50

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	dummy := ListNode{0, nil}
	p := &dummy

	for l1 != nil && l2 != nil {
		if l1.Val < l2.Val {
			p.Next = l1
			p = p.Next
			l1 = l1.Next
		} else {
			p.Next = l2
			p = p.Next
			l2 = l2.Next
		}
	}

	if l1 != nil {
		p.Next = l1
	}
	if l2 != nil {
		p.Next = l2
	}

	return dummy.Next
}