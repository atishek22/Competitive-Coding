/*
 * Problem Link - https://cses.fi/problemset/task/1745
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

bool possible[101][100001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, max_sum;
  vector<int> coins(101);
  cin >> n;
  max_sum = n * 1000;
  for(int i = 1; i <= n; i++) {
    cin >> coins[i];
  }

  possible[0][0] = true;

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= max_sum; j++) {
      possible[i][j] |= possible[i-1][j];
      if(j - coins[i] >= 0) {
        possible[i][j] |= possible[i-1][j - coins[i]];
      }
    }
  }

  vector<int> sum;
  for(int i = 1; i <= max_sum; i++) {
    if(possible[n][i]) {
      sum.push_back(i);
    }
  }

  cout << sum.size() << "\n";
  for(auto s: sum) {
    cout << s << " ";
  }
  cout << "\n";

  return 0;
}
