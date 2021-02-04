#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    long long count = 0, curr, prev;
    cin >> n;

    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr < prev) {
            long long temp = prev - curr;
            curr += temp;
            count += temp;
        }

        prev = curr;
    }

    cout << count << "\n";

    return 0;
}
