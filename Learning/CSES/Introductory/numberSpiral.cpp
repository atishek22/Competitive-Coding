#include<bits/stdc++.h>

using namespace std;

long long solve(long long x, long long y) {
    long long val;
    if(x >= y && x % 2 != 0) {
        long long r = (x-1) * (x-1);
        val = r + y;
    } else if(x >= y && x % 2 == 0) {
        long long r = x * x;
        val = r - y + 1;
    } else if(y >= x && y % 2 == 0) {
        long long r = (y-1) * (y-1);
        val = r + x;
    } else if(y >= x && y % 2 != 0) {
        long long r = y * y;
        val = r - x + 1;
    }
    return val;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        long long x, y;
        long long val;
        cin >> x >> y;
        cout << solve(x,y) << "\n";
    }
    return 0;
}
