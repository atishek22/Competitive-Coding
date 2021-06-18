/*
 * Problem Link - https://codeforces.com/problemset/problem/455/A 
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int n;
vector<long long> c(100005, 0);

void solve() {
  vector<long long> val(100001);
  val[0] = 0;
  val[1] = c[1];

  for(int i = 2; i <= 100000 ; i++) {
    val[i] = max(val[i-1], val[i-2] + c[i]*i);
  }
  cout << val[100000] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  int num;
  for(int i = 0; i < n; i++) {
    cin >> num;
    c[num]++;
  }
  solve();
  return 0;
}
