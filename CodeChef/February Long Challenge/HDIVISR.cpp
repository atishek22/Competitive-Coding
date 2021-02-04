#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, max = 1;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        if (n % i == 0) {
            max = i;
        }
    }
    cout << max << "\n";
}