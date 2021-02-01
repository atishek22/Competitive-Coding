#include <bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* Result = nullptr;
        ListNode* current = nullptr;
        int carry = 0;
        while (l1 || l2) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            if (Result == nullptr) {
                current = new ListNode(sum % 10);
                Result = current;
            }
            else {
                current->next = new ListNode(sum % 10);
                current = current->next;
            }
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry) {
            current->next = new ListNode(carry);
        }
        return Result;
    }
};