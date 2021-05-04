/*
 * Problem Link - https://codeforces.com/problemset/problem/122/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

vector<int> val {4, 7, 47, 74, 444, 447, 474, 744, 774, 747, 477, 777};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  bool flag = false;
  cin >> n;
  for(auto x: val) {
    if((n % x) == 0) {
      flag = true;
      break;
    }
  } 
  
  if(flag) cout << "YES";
  else cout << "NO";
  return 0;
}
