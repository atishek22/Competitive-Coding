/*
 * Problem Link - https://codeforces.com/problemset/problem/189/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> lengths;

void solve() {
  vector<int> val(n+1);
  val[0] = 0;

  for(int i = 1; i <= n; i++) {
    val[i] = INT_MIN;
    for(auto l: lengths) {
      if(i - l >= 0) {
        val[i] = max(val[i], val[i - l] + 1);
      }
    }
  }
  cout << val[n] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int in;
  for(int i = 0; i < 3; i++) {
    cin >> in;
    lengths.push_back(in);
  }
  solve();
  return 0;
}
