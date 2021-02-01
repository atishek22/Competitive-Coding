#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        vector<int> Result{};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) continue;
            else {
                Result.push_back(nums[i]);
            }
        }
        nums = Result;
        return Result.size();
    }
};