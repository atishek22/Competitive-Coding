#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long* arr;
    long long n, sum = 0, x;
    cin >> n;
    long long sumActual = n * (n + 1) / 2;
    while (cin >> x) {
        sum += x;
    }
    cout << sumActual - sum << "\n";
    return 0;
}