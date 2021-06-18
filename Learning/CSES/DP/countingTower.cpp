/*
 * Problem Link - https://cses.fi/problemset/task/2413
 * Solution - 
 */

#include<iostream>

using namespace std;

long long MOD = 1e9 + 7;

long long dp[1000001][8];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  for(int i = 0; i < 8; i++) {
    dp[0][i] = 1;
  }

  for(int i = 1; i < 1000000; i++) {
    for(int j = 0; j < 8; j++) {
      if(j == 0|| j == 2 || j == 3 || j == 4 || j == 5) {
        dp[i][j] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][3] + dp[i-1][4] + dp[i-1][5]) % MOD;
      } else {
        dp[i][j] = (dp[i-1][2] + dp[i-1][6] + dp[i-1][7])%MOD;
      }
    }
  }

  cin >> t;
  while(t--) {
    cin >> n;
    long long ans = ((dp[n-1][3] + dp[n-1][7]) % MOD);
    cout << ans << "\n";
  }

  return 0;
}
