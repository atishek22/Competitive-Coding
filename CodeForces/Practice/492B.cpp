/*
 * Problem Link - https://codeforces.com/problemset/problem/492/B
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int n;
double l;
vector<double> a;
double d = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ai;

  cin >> n >> l;
  for(int i = 0; i < n; i++) {
    cin >> ai;
    a.push_back(ai);
  }

  sort(begin(a), end(a));

  for(int i = 1; i < n; i++) {
    double mid = (a[i] - a[i-1]);
    d = max(d, mid);
  }
  d = max(d/2, l - a[n-1]);
  d = max(d, a[0]);

  cout << setprecision(9) << d;

  return 0;
}
