/*
 * Problem Link - https://codeforces.com/problemset/problem/131/A
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

string solve(string input) {
  string output = "";
  for(auto x: input) {
    if(islower(x)) {
      output += toupper(x);
    } else {
      output += tolower(x);
    }
  }
  return output;
}

bool check(string input) {
  int flag = true;
  if(islower(input[0])) {
    for(int i = 1; i < input.size(); i++) {
      if(islower(input[i])) flag = false;
    }
  } else {
    for(int i = 0; i < input.size(); i++) {
      if(islower(input[i])) flag = false;
    }
  }
  return flag;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string input;
  cin >> input;
  if(check(input)) {
    cout << solve(input) << "\n";
  } else {
    cout << input << "\n";
  }
  return 0;
}
