#include<bits/stdc++.h>

using namespace std;

bool possible[100][100]{};
int w[] = {0, 1, 3, 3, 5};
int n = 4;
int m = 12;

void solve() {
    possible[0][0] = true;
    for(int k = 1; k <= n; k++) {
        for(int x = 0; x <= m; x++) {
            if(x - w[k] >= 0) {
                possible[x][k] |= possible[x-w[k]][k-1];
            }
            possible[x][k] |= possible[x][k-1];
        }
    }
}


int main() {
    solve();
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            cout << possible[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}
