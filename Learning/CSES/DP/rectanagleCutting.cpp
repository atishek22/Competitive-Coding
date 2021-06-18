/*
 * Problem Link - https://cses.fi/problemset/task/1744
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int dp[501][501];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;

  for(int i = 1; i <= a; i++) {
    for(int j = 1; j <= b; j++) {
      if(i == j) {
        dp[i][j] = 0;
      }
      else {
        dp[i][j] = INT_MAX;
        for(int k = 1; k < i; k++) {
          dp[i][j] = min(dp[i][j], dp[i-k][j] + 1 + dp[k][j]);
        }
        for(int k = 1; k < j; k++) {
          dp[i][j] = min(dp[i][j], dp[i][j-k] + 1 + dp[i][k]);
        }
      }
    }
  }
  cout << dp[a][b] << "\n";
  return 0;
}
