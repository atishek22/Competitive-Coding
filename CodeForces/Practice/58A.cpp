/*
 * Problem Link - https://codeforces.com/problemset/problem/58/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

string solve(string input) {
  string word = "hello";
  int i = 0;
  for(auto x: input) {
    if(x == word[i]) {
      i++;
    }
  }
  if(i == 5) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string input;
  cin >> input;
  if(input.length() < 5) {
    cout << "NO\n";
  } else {
    cout << solve(input) << "\n";
  }
  return 0;
}
