#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long m = 1000000007;
    vector<long long> dice{1, 2, 3, 4, 5, 6};
    cin >> n;
    vector<long long> value(n+1);

    value[0] = 0;
    for(long long i = 1; i <= n; i++) {
        for(auto d: dice) {
            if(i - d >= 0) {
                value[i] += value[i-d];
                value[i] %= m;
            }
        }
    }
    cout << value[n] % m << "\n";
    return 0;
}
