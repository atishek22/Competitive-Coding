#include<bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num1, num2;
    vector<int> in, out;
    int count = 0, max_ = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        in.push_back(num1);
        out.push_back(num2);
    }

    sort(in.begin(), in.end());
    sort(out.begin(), out.end());

    int val = max(in[n-1], out[n-1]);
    int x = 0, y = 0;
    while(x < n && y < n) {
        if(in[x] < out[y]) {
            count++;
            x++;
        } else {
            count--;
            y++;
        }
        max_ = max(count, max_);
    }
    cout << max_ << "\n";
    return 0;
}
