#include<bits/stdc++.h>
#include<map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int size = s.size();
        int number = 0;
        for (int i = 0; i < size; i++) {
            number += val[s[i]];

            if (val[s[i + 1]] > val[s[i]]) {
                number -= 2 * val[s[i]];
            }
        }
        cout << number;
        return number;
    }
};