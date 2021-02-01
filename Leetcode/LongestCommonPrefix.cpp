#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string prefix = strs[0];
        string result = "";
        for (int i = 1; i < strs.size(); i++) {
            string x = strs[i];
            for (int j = 0; j < prefix.length(); j++) {
                if (prefix[j] == x[j]) {
                    result.push_back(prefix[i]);
                }
                else break;
            }
            cout << result;
            prefix = result;
            result = "";
        }
        return prefix;
    }
};