/*
 * Problem Link - https://codeforces.com/problemset/problem/25/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int t;
vector<int> even, odd;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num;
  cin >> t;
  for(int i = 1; i <= t; i++){
    cin >> num;
    if(num % 2 == 0) even.push_back(i);
    else odd.push_back(i);
  }
  if(odd.size() == 1) {
    cout << odd[0] << "\n";
  } else {
    cout << even[0] << "\n";
  }

  return 0;
}
