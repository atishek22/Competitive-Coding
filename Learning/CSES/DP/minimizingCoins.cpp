#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    vector<int> coins;

    cin >> n >> x;
    int c;
    for(int i = 0; i < n; i++) {
        cin >> c;
        coins.push_back(c);
    }

    vector<long long> value(x+1);

    value[0] = 0;
    for(int i = 1; i <= x; i++) {
        value[i] = INT_MAX;
        for(auto coin: coins) {
            if(i - coin >= 0) {
                value[i] = min(value[i], value[i-coin] + 1);
            }
        }
    }
    if(value[x] == INT_MAX) {
        cout << -1 << "\n";
    } else { 
    cout << value[x] << "\n";
    }

    return 0;
}
