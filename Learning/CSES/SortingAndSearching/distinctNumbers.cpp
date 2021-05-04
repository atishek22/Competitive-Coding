/*
 * Problem - https://cses.fi/problemset/task/1621
 *
 * Solution - sort the array and then only pick the unique values and count them
 *
 */

#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n ; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size()<< "\n";
    return 0;
}
