#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, len;
    cin >> n;
    if (n == 2 or n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    if (n == 4) {
        cout << "2 4 1 3\n";
        return 0;
    }

    int* arr = new int[n];
    bool even = n % 2 == 0;
    int count = ceil((float)n / 2);
    for (int i = 1; i <= n; i++) {
        if (even && i == (n / 2) + 1)
            count++;
        int index = (i + count) % n;
        count++;
        arr[index] = i;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}