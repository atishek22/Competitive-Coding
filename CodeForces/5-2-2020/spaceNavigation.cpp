#include<bits/stdc++.h>

using namespace std;

void solve(int* planet, string orders) {
    int counts[4]{};
    for (auto x : orders) {
        switch ((char)x) {
        case 'U': counts[2]++; break;
        case 'D': counts[3]++; break;
        case 'R': counts[0]++; break;
        case 'L': counts[1]++; break;
        }
    }

    //there is definately a better way to do this will do
    if (planet[0] > 0) {
        if (planet[1] > 0) {
            if (counts[0] >= planet[0] && counts[2] >= planet[1]) cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
            return;
        }
        else {
            if (counts[0] >= planet[0] && counts[3] >= abs(planet[1])) cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
            return;
        }
    }
    else {
        if (planet[1] > 0) {
            if (counts[1] >= abs(planet[0]) && counts[2] >= planet[1]) cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
            return;
        }
        else {
            if (counts[1] >= abs(planet[0]) && counts[3] >= abs(planet[1])) cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int planet[2]{};
        string orders;
        cin >> planet[0] >> planet[1];
        cin >> orders;
        solve(planet, orders);
    }
    return 0;
}