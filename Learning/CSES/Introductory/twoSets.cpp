#include <bits/stdc++.h>

using namespace std;

void solve(long long n) {
    long long val = (n * (n+1)) / 2LL;
    if(val & 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        long long reqSum = val / 2LL;
        vector<long long> a1, a2;
        while(n) {
            if(reqSum - n >= 0) {
                a1.push_back(n);
                reqSum -= n;
            }
            else {
                a2.push_back(n);
            }
            n--;
        }
        cout << a1.size() << "\n";
        for(int i = a1.size() - 1; i >= 0; i--) {
            cout<< a1[i] <<" ";
        }
        cout <<"\n" << a2.size() << "\n";
        for(int i = a2.size() - 1; i >= 0; i--) {
            cout<< a2[i] <<" ";
        }
        cout << "\n";
    }
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;

    solve(n);

    return 0;
}
