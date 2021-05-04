/*
 * Problem Link - https://codeforces.com/problemset/problem/69/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int x = 0, y = 0, z = 0;
  int in;
  cin >> n;
  while(n--) {
    cin >> in;
    x += in;
    cin >> in;
    y += in;
    cin >> in;
    z += in;
  }

  if(x == 0 && y == 0 && z == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
