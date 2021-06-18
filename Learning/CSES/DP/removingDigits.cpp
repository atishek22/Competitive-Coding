/*
 * Problem Link - https://cses.fi/problemset/task/1637
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

vector<int> get_digits(int i) {
  int digit;
  vector<int> ret;
  while(i) {
    digit = i % 10;
    i /= 10;
    ret.push_back(digit);
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> digits;
  vector<int> vals(n+1);
  vals[0] = 0;


  for(int i = 1 ; i <= n; i++) {
    digits = get_digits(i);
    vals[i] = std::numeric_limits<int>::max()-1;
    for(auto digit: digits) {
      if(i - digit >= 0) {
        vals[i] = min(vals[i], vals[i-digit] + 1);
      }
    }
  }
  cout << vals[n] << "\n";

  return 0;
}
