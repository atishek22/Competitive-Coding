/*
 * Problem Link - https://cses.fi/problemset/task/1745
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> nums(n);
  long long sum = 0;

  for(int& n : nums) {
    cin >> n;
    sum += n;
  }

  vector<vector<long long>> dp (n, vector<long long>(n));
  for(int l = n-1; l >= 0; l--) {
    for(int r = l; r < n; r++) {
      if(l == r) dp[l][r] = nums[l];
      else {
        dp[l][r] = max(nums[l] - dp[l+1][r], nums[r] - dp[l][r-1]);
      }
    }
  }

  cout << (sum + dp[0][n-1]) / 2 << "\n";
  return 0;
}
