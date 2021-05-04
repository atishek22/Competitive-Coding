/*
 * Problem Link - https://codeforces.com/problemset/problem/1/A
 * Solution - Check for the tiles required in each dimensions and multiply to find the total tiles needed 
 */

#include<bits/stdc++.h>

using namespace std;

long long n, m, a;

long long solve() {
  long long row = ceil((double) n/a);
  long long col = ceil((double) m/a);
  return row * col;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> a;
  
  cout << solve() << "\n";
  return 0;
}
