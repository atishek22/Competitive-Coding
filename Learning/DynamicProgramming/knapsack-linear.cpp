#include<bits/stdc++.h>

using namespace std;
bool possible[100]{};
int w[] = {0, 1, 3, 3, 5};
int n = 4;
int m = 12;

void solve() {
    possible[0] = true;
    for(int k = 1; k <= n; k++) {
        for(int x = m - w[k]; x >= 0; x--) {
            possible[x+w[k]] |= possible[x];
        }
    }
}

int main() {
    solve();
    for(int i = 0; i <= 12; i++) {
        cout << possible[i] << "  ";
    }
    cout << "\n";
    return 0;
}
