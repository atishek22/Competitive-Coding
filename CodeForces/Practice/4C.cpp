/*
 * Problem Link - https://codeforces.com/problemset/problem/4/C
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

map<string, int> names;
string input;
string output;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
    cin >> input;
    if(names.find(input) == names.end()) {
      output = "OK";
      names[input] = 1;
    } else {
      output = input + to_string(names[input]);
      names[input]++;
    }
    cout << output << "\n";
  }
  return 0;
}
