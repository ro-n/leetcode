// 2020-08-05 00:07:24

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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == null) return true;

        int len = 0;
        for (ListNode* p = head; p != nullptr; p = p->next) len += 1;

        ListNode* prev = nullptr;
        ListNode* cur = head;
        for (int i = 0; i < len / 2; i++) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        if ((len & 1) == 1) cur = cur->next;
        for (; cur != nullptr && prev != nullptr; cur = cur->next, prev = prev->next) {
            if (cur->val != prev->val) return false;
        }

        return true;
    }
};
