#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> paran{};
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                paran.push(s[i]);
            }
            else {
                if (paran.empty()) return false; //this line was pretty immportant 
                char rev;
                switch (s[i]) {
                case ')':
                    rev = '(';
                    break;
                case '}':
                    rev = '{';
                    break;
                case ']':
                    rev = '[';
                    break;
                }
                if (paran.top() == rev) {
                    paran.pop();
                }
                else return false;
            }
        }
        return paran.empty() ? true : false;
    }
};