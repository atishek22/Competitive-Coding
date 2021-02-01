//placing n queens on a n*n board

#include<bits/stdc++.h>
using namespace std;

#define n 4
int col[n * n]{}, diag1[n * n]{}, diag2[n * n]{};
int Count = 0;

void printStuff() {
    cout << "col: \n";
    for (int i = 0; i < n * n; i++) { if (i % n == 0) cout << endl; cout << col[i] << '\t'; }
    cout << "\ndiag1: \n";
    for (int i = 0; i < n * n; i++) { if (i % n == 0) cout << endl; cout << diag1[i] << '\t'; }
    cout << "\ndiag2: \n";
    for (int i = 0; i < n * n; i++) { if (i % n == 0) cout << endl; cout << diag2[i] << '\t'; }
    cout << "\nCount:" << Count << endl << endl;

}

void search(int y, int depth) {
    if (y == n) {
        Count++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1, depth + 1);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
    printStuff();
    cout << "Depth:" << depth << endl;
}

int main() {
    search(0, 0);
    cout << Count << endl;
}