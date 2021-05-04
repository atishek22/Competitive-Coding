/*
 * Problem Link - https://codeforces.com/problemset/problem/118/A
 * Solution - Transform the string to lower case check for each character if vowel if not append .+char else skip the char 
 */

#include<bits/stdc++.h>

using namespace std;

string input;
vector<char> vowels{'a', 'o', 'y', 'e', 'u', 'i'};

string solve() {
  bool flag = false;
  string out = "";
  for(auto in: input) {
    flag = false;
    for(auto v: vowels) {
      if(in == v) {
        flag = true;
        break;
      }
    }
    if(flag) {
      //vowel
      continue;
    } else {
      out.append(".");
      out += in;
    }
  }
  return out;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> input;
  transform(input.begin(), input.end(), input.begin(), ::tolower);

  cout << solve() << "\n";

  return 0;
}
