/*
 * Problem Link - https://codeforces.com/problemset/problem/158/B
 * Solution - 
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, num;
  int val[] = {0, 0, 0, 0, 0};
  cin >> n;
  for(int i = 0;i < n; i++) {
    cin >> num;
    switch(num) {
      case 1: val[1]++;
              break;
      case 2: val[2]++;
              break;
      case 3: val[3]++;
              break;
      case 4: val[4]++;
              break;
    }
  }

  int cars = val[4];
  if(val[3] <= val[1]) {
    val[1] -= val[3];
    cars += val[3];
  } else {
    val[1] = 0;
    cars += val[3];
  }
  int g2 = val[2] % 2;
  cars += val[2] / 2;
  if(g2 > 0) {
    cars += g2;
    val[1] -= 2*g2;
  }

  if(val[1] > 0) {
    if(val[1] <= 4) cars++;
    else {
      cars += val[1] / 4;
      if(val[1] % 4 != 0) cars++;
    }
  }

  cout << cars << "\n";
  return 0;
}
