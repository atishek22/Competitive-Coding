#include <bits/stdc++.h>

using namespace std;

// gray code for binary number i = i XOR Right Shifted(i,1) 

void solve(int n) {
    for(int i = 0; i < (1 << n); i++) {
        int code = (i ^ (i >> 1));

        bitset<32> a(code);

        string res = a.to_string();
        cout << res.substr(32 - n) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
