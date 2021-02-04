#include <bits/stdc++.h>

using namespace std;

//solving it using combinatorics
// TODO: think of an algorithm
long long solve(int n) {
    long long ns = n * n;
    long long a = ns * (ns - 1) / 2;
    long long b = 4 * (n - 1) * (n - 2);
    return a - b;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << solve(i) << "\n";
    }
    return 0;
}
