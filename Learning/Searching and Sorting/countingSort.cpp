#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr, int c) {
    vector<int> bookkeeping(c+1, 0), temp(arr);
    for(auto x: arr) bookkeeping[x]++;
    for(int i = 1; i <= c; i++) bookkeeping[i] += bookkeeping[i-1];

    for(auto x: temp) {
        arr[bookkeeping[x] - 1] = x;
        --bookkeeping[x];
    }
}

int max(vector<int> arr) {
    int max = INT_MIN;
    for(auto x: arr) {
        if(x > max) max = x;
    }
    return max;
}

int main() {
    vector<int> arr{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    countingSort(arr, max(arr));
    auto print = [](const int&n) {cout << " " << n;};
    for_each(arr.cbegin(), arr.cend(), print);
    cout << "\n";
    return 0;
}
