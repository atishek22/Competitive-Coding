/*
 * Problem Link - https://codeforces.com/problemset/problem/230/B
 * Solution - Only squares of prime numbers are T-primes
 */

#include<bits/stdc++.h>

using namespace std;

int n;
int64_t number;
set<int64_t> primes;

void Sieve_of_Eratosthenes(int n) {
  bool prime[n+1];
  memset(prime, true, sizeof(prime));

  for(int p = 2; p*p <= n; p++) {
    if(prime[p] == true) {
      for(int i = p*p; i <= n; i += p){
        prime[i] = false;
      }
    }
  }
  for(int p = 2; p <= n; p++) {
    if(prime[p]) {
      primes.insert((int64_t)p*p);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  Sieve_of_Eratosthenes(1000000);
  cin >> n;
  while(n--) {
    cin >> number;
    if(primes.find(number) == primes.end()) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
