/*
 * Problem Link - https://cses.fi/problemset/task/1638
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

bool grid[1001][1001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string line;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> line;
    for(int j = 0; j < n; j++){
      if(line[j] == '*')
        grid[i][j] = false;
      else 
        grid[i][j] = true;
    }
  }

  int m = 1000000007;

  long long val[1001][1001];
  val[0][0] = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(!grid[i][j]) val[i][j] = 0;
      else {
        if(i > 0) val[i][j] += val[i-1][j];
        if(j > 0) val[i][j] += val[i][j-1];
        val[i][j] %= m;
      }
    } 
  }
  cout << val[n-1][n-1] << "\n";
  return 0;
}
