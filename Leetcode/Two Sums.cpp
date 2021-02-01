#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result{};
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
