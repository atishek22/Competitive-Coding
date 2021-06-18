/*
 * Problem Link - https://cses.fi/problemset/task/1639
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int dp[5001][5001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string in, out;

  cin >> in >> out;

  for(int i = 0; i <= in.length(); i++) {
    for(int j = 0; j <= out.length(); j++) {

      if(i == 0) dp[i][j] = j; //add all the elements
      else if(j == 0) dp[i][j] = i; //remove all the elements

      else if(in[i-1] == out[j-1]) 
        dp[i][j] = dp[i-1][j-1]; //do nothind

      else {
        dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
      }
    }
  }

  cout << dp[in.length()][out.length()] << "\n";

  return 0;
}
