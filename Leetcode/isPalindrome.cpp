#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int original = x;
        //reverse the number
        int rev = 0, digit;
        while (x) {
            digit = x % 10;
            //checking for overflow
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        return bool(rev == original);
    }
};