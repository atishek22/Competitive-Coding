#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> sticks;
    int num;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sticks.push_back(num);
    }

    sort(sticks.begin(), sticks.end());

    int median = sticks[n/2];
    long long ans = 0;
    for(auto &s: sticks ) {
        ans += abs(median - s);
    }
    cout << ans << "\n";
    return 0;
}
