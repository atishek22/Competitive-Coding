#include<bits/stdc++.h>
#include <vector>

using namespace std;

// maintaining an active subarray and checking its middle element
bool first_method(vector<int> arr, int val) {
    int a = 0, b = arr.size() - 1;
    while(a <= b) {
        int k = (a+b)/2;
        if(arr[k] == val) return true;
        if(arr[k] < val) a = k+1;
        else b = k-1;
    }
    return false;
}

bool second_method(vector<int> arr, int val) {
    int k = 0;
    int n = arr.size();
    for(int b = n/2; b >= 1; b /= 2) {
        while(k+b < n && arr[k+b] <= val) k += b;
    }
    if(arr[k] == val) return true;
    return false;
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << first_method(arr, 1) << "\n";
    cout << second_method(arr, 11) << "\n";
    return 0;
}
