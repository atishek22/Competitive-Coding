#include "bits/stdc++.h"

using namespace std;

bool binarySearch1(int* arr, int n) {
    int a = 0, b = n - 1;
    while (a <= b) {
        int k = (a + b) / 2;
        if (arr[k] == n) {
            //n found at index k
            return true;
        }
        if (arr[k] < n) a = k + 1;
        else b = k - 1;
    }
    return false;
}

bool binarySearch2(int* arr, int n) {
    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n && arr[k + b] <= n) k += b;
        if (arr[k] == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    cout << binarySearch1(arr, 2) << "\n";
    cout << binarySearch2(arr, 20) << "\n";
    return 0;
}