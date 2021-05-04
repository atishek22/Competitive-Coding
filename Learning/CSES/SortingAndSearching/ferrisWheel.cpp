#include <algorithm>
#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

vector<long long> weight1, weight2;
long long n,x, num;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        cin >> num;
        weight1.push_back(num);
    }

    sort(weight1.rbegin(), weight1.rend());

    long long count = 0;
    long long  i = 0, j = n-1;
    while(i <= j) {
        if(weight1[i] < x && (weight1[j] <= x - weight1[i])) {
            count++;
            i++; j--;
        } else {
            count++; i++;
        }
    }        
    cout << count << "\n";
    return 0;
}
