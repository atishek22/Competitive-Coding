#include<bits/stdc++.h>

using namespace std;

#define n 8
int col[n * n]{}, diag1[n * n]{}, diag2[n * n]{};
int Count = 0;
bool rest[n * n]{};

void search(int y, int depth) {
    if (y == n) {
        Count++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if ((col[x] || diag1[x + y] || diag2[x - y + n - 1])) continue;
        if (rest[x]) {
            col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
            search(y + 1, depth + 1);
            col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char ch;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> ch;
            if (ch == '*') {
                rest[i * n + j] = true;
            }
            else {
                rest[i * n + j] = false;
            }
        }
    }
    search(0, 0);
    cout << Count << "\n";
}