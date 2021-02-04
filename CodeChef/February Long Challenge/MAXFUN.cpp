#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        long long max = 0, x;
        cin >> N;
        vector<long long> v;
        for (int j = 0; j < N; j++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long val[3];
        val[0] = *(v.end() - 1);
        val[1] = *(v.end() - 2);
        val[2] = *(v.begin());
        max = abs(val[0] - val[1]) + abs(val[0] - val[2]) + abs(val[1] - val[2]);
        cout << max << "\n";
    }
    return 0;
}