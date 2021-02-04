#include<bits/stdc++.h>

using namespace std;

void solve(int n, int from, int mid, int to) {
    if(n == 1){
        cout << from << " " << to << "\n";
        return;
    }
    solve(n-1, from, to, mid);
    cout << from << " " << to << "\n";
    solve(n-1, mid, from, to);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    solve(n, 1, 2, 3);

    return 0;
}


