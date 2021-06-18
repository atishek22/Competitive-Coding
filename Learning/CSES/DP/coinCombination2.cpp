/*
 * Problem Link - https://cses.fi/problemset/task/1636
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long m = (long long)1e9 + 7;
  vector<long long> coins;
  int n; int x;
  int c;

  cin >> n >> x;

  sort(coins.begin(), coins.end());

  vector<long long> values(x+1);

  for(int i = 0; i < n; i++) {
    cin >> c;
    coins.push_back(c);
  }

  values[0] = 1;

  for(auto coin: coins) {
    for(int i = 0; i <= x; i++) {
      if(i - coin >= 0) {
        values[i] += values[i-coin];
        values[i] %= m;
      }
    }
  }

  cout << values[x] << "\n";
  return 0;
}
