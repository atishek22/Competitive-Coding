#include<vector>
using namespace std;

class Solution {
    public:
    int maximumWealth (vector<vector<int>>& accounts){
        int max = 0;
        int sum = 0;
        for(auto i: accounts){
            sum = 0;
            for(auto j: i){
                sum += j;
                if(max < sum){
                    max = sum;
                }
            }
        }
        return max;
    }
};