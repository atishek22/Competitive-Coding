/*
 * Problem Link - https://cses.fi/problemset/task/1746
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

long long dp[100001][101];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;

  int MOD = 1e9 + 7;

  vector<int> arr(n+1);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  //arr[0] the value can be anything (based on the previous value)
  if(arr[0] == 0) {
    fill(dp[0], dp[0]+101, 1);
  } else {
    dp[0][arr[0]] = 1;
  }
  for(int i = 1; i < n; i++) {
    // If the value is unknown check for all the values
    if(arr[i] == 0) {
      for(int j = 1; j <= m; j++) {
        dp[i][j] += dp[i-1][j];
        if(j - 1 > 0) dp[i][j] += dp[i-1][j-1];
        if(j + 1 <= m) dp[i][j] += dp[i-1][j+1];
        dp[i][j] %= MOD;
      }
    } 
    // if the value is known only adding in the last value that differs by 1
    else {
      dp[i][arr[i]] += dp[i-1][arr[i]];
      if(arr[i] - 1 > 0) dp[i][arr[i]] += dp[i-1][arr[i] - 1];
      if(arr[i] + 1 <= m) dp[i][arr[i]] += dp[i-1][arr[i] + 1];
      dp[i][arr[i]] %= MOD;
    }
  }
  long long answer = 0;
  for(int i = 1; i <= m; i++) {
    answer += dp[n-1][i];
    answer %= MOD;
  }
  cout << answer << "\n";
  return 0;
}
