// 2020-08-08 23:38:20

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* p = &dummy;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val > l2->val) {
                p->next = l2;
                p = p->next;
                l2 = l2->next;
            }
            else {
                p->next = l1;
                p = p->next;
                l1 = l1->next;
            }
        }

        if (l1 != nullptr) {
            p->next = l1;
        }

        if (l2 != nullptr) {
            p->next = l2;
        }

        return dummy.next;
    }
};