#include<bits/stdc++.h>

using namespace std;

void solve(int n, int k, int* heights) {
    int pos = -1;
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (heights[j] < heights[j + 1]) {
                heights[j]++;
                if (i == k - 2) pos = j + 1;
            }
        }
    }
    if (pos == n) pos = -1;
    cout << pos << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, input;
        cin >> n >> k;
        int* heights = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> heights[j];
        }
        solve(n, k, heights);
    }
    return 0;
}