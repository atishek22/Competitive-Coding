#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* Result = nullptr;
        ListNode* end = nullptr;

        while (l1 || l2) {
            int val1 = l1 ? l1->val : INT_MAX;
            int val2 = l2 ? l2->val : INT_MAX;
            int val;
            if (val1 < val2) {
                val = val1;
                l1 = l1->next;
            }
            else {
                val = val2;
                l2 = l2->next;
            }

            if (Result == nullptr) {
                Result = new ListNode(val);
                end = Result;
            }
            else {
                end->next = new ListNode(val);
                end = end->next;
            }
        }
        return Result;
    }
};