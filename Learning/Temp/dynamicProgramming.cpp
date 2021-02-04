#include<bits/stdc++.h>

using namespace std;

//The problem can be broken into smaller chunks that can be solved recusively
//
//        |-> undefined; x < 0
//solve --|-> 0;  x = 0;
//        |-> min solve(x - c) + 1 ; for all c in coins
//
#define INF 100000
#define N 100

set<int> coins;

int coinProblemInefficient(int x) {
    if (x < 0) return INF;
    if (x == 0) return 0;
    int best = INF;
    for (auto c : coins) {
        best = min(best, coinProblemInefficient(x - c) + 1);
    }
    return best;
}

//Memoization
bool ready[N]{};
int value[N]{};
//O(nk)
int coinProblemEfficient(int x) {
    if (x < 0) return INF;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = INF;
    for (auto c : coins) {
        best = min(best, coinProblemEfficient(x - c) + 1);
    }
    ready[x] = true;
    value[x] = best;
    return best;
}

//faster than the above implementation
int coinProblemIterative(int n) {
    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = INF;
        for (auto c : coins) {
            if (x - c >= 0) {
                value[x] = min(value[x], value[x - c] + 1);
            }
        }
    }
    return value[n];
}

//constructing a solution
//this array defines the first coin's value in each required sum
int first[N];
void soltionCoinProblem(int n) {
    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = INF;
        for (auto c : coins) {
            if (x - c >= 0 && value[x - c] + 1 < value[x]) {
                value[x] = value[x - c] + 1;
                first[x] = c;
            }
        }
    }
}

//Counting possible solutions for the coin problem
// This problem can also be solved recusively
//          |--> 0;  x < 0
//solve(x) -|--> 1;  x = ;
//          |--> add(solve(x-c));  x > 0
//
int count1[100]{};

int numOfSolutions(int n) {
    count1[0] = 1;
    for (int x = 1; x <= n; x++) {
        for (auto c : coins) {
            if (x - c >= 0) {
                //count1[x] %= m; incase the count value is very large and only the mod m value is required
                count1[x] += count1[x - c];
            }
        }
    }
    return count1[n];
}

int main() {
    int n = 10;
    coins.insert(1);
    coins.insert(3);
    coins.insert(4);
    cout << coinProblemEfficient(10) << "\n";
    cout << coinProblemInefficient(10) << "\n";
    cout << coinProblemIterative(10) << "\n";
    soltionCoinProblem(10);
    //this loop prints the optimal soltion calculated above
    while (n > 0) {
        cout << first[n] << "\t";
        n -= first[n];
    } cout << "\n";
    cout << numOfSolutions(5) << "\n";
    return 0;
}