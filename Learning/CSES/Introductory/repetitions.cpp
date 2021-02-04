#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string input;
    cin >> input;

    int val = 0, count = 1;
    int len = input.size();
    char ch = input[0];
    for (int i = 1; i < len; i++) {
        if (input[i] == ch) count++;
        else {
            ch = input[i];
            val = max(val, count);
            count = 1;
        }
    }
    val = max(val, count);
    cout << val << "\n";
    return 0;
}