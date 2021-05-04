#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size();
            int res = 0;

            for(int i = 0; i < n; i++) {
                vector<bool> visit(256, false);
                for(int j = i; j < n; j++) {
                    if(visit[s[j]])
                        break;
                    else {
                        res = max(res, j-i+1);
                        visit[s[j]] = true;
                    }
                }
                visit[s[i]] = false;
            }
            return res;
        }

};
