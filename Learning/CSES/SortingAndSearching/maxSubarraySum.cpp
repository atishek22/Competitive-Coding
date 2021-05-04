#include<bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
    long long n;
    vector<long long> arr;

    cin >> n;
    long long num;
    for(long long i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    long long sum = 0;
    long long best = INT_MIN;
    for(auto x: arr) {
        sum = max(sum + x, x);
        best = max(best, sum);
    }
    cout << best << "\n";
    return 0;
}
