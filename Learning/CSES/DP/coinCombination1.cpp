#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<long long> coins;
    long long m = 1000000007;

    long long c;
    for(int i = 0; i < n; i++) {
        cin >> c;
        coins.push_back(c);
    }

    vector<long long> value(x+1);
    value[0] = 1;
    for(int i = 0; i <= x; i++) {
        for(auto coin: coins) {
            if(i - coin >= 0){
                value[i] += value[i-coin];
                value[i] %= m;
            }
        }
    }

    cout << value[x]<<"\n";
    return 0;
}
