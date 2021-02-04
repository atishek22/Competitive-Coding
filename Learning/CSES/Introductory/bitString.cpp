#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    unsigned long long n, ans = 1;
    cin >> n;
    while(n) {
        if(n >= 30) {
            ans *= (1 << 30);
            ans = ans % MOD;
            n -= 30;
        } else {
            if(n == 0) break;
            else{
                ans *= (1 << n);
                ans = ans % MOD;
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
