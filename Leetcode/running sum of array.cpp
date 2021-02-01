#include<vector>
using namespace std;

class Solution {
    public:
    vector<int> runningSum(vector<int> &nums){
        vector<int> Result{};
        int sum = 0;
        for(auto num: nums){
            sum += num;
            Result.push_back(sum);
        }
        return Result;
    }
};