/*
 * Problem Link - https://cses.fi/problemset/task/1158
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int dp[1001][100001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x, in;
  cin >> n >> x;
  vector<int> prices(n+1), pages(n+1);

  for(int i = 1; i <= n; i++) {
    cin >> prices[i];
  }
  for(int i = 1; i <= n; i++) {
    cin >> pages[i];
  }

  dp[0][0] = 0;

  for(int i = 0; i <= n; i++)  {
    for(int j = 0; j <= x; j++) {
      if(i == 0 || j == 0) dp[i][j] = 0;
      else if(j - prices[i] >= 0) {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-prices[i]] + pages[i]);
      } else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  cout << dp[n][x] << "\n";

  return 0;
}
