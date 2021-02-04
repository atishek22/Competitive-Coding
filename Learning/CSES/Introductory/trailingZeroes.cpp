#include<bits/stdc++.h>

using namespace std;

long long solve(long long n) {
    long long ans = 0, temp;
    for(temp = 5; n >= temp; temp *= 5) {
        ans += n/temp;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long n;
    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}
