#include <bits/stdc++.h>
#include <complex>
#include <numeric>
#include <vector>

using namespace std;

int n;
long long sum;

vector<int> subset, result;

long long* p = new long long[n];
long long min_diff = LONG_LONG_MAX;

void solve(int k)
{
    long long temp = 0;
    if (n == k) {
        for (auto x : subset) {
            temp += p[x];
        }
        long long ret = abs(sum - 2 * temp);
        if (ret < min_diff) {
            min_diff = ret;
        }
    }
    else {
        subset.push_back(k);
        solve(k + 1);
        subset.pop_back();
        solve(k + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    solve(0);
    cout << min_diff << "\n";
    delete p;
    return 0;
}
