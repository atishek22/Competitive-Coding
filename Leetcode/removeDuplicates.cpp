#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        vector<int> Result{};
        int newVal = nums[0];
        Result.push_back(newVal);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == newVal) continue;
            else {
                newVal = nums[i];
                Result.push_back(newVal);
            }
        }

        nums = Result;
        return nums.size();
    }
};