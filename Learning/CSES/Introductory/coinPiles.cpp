#include<bits/stdc++.h>

using namespace std;

string solve(long long a, long long b) {
    if(a == 0 && b == 0) return "YES";
    long long s1 = (2*a) - b;
    long long s2 = (2*b) - a;
    long long x = s1/3, y = s2/3;
    if(s1 % 3 == 0 && s2 % 3 == 0) {
        if(x >= 0 && y >= 0) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long a,b;
        cin >> a >> b;
        cout << solve(a,b) << "\n";
    }
    return 0;
}
