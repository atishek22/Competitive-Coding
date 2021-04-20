#include<bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int a , int mid, int b) {
    vector<int> L, R;
    for(int i = a; i <= mid; i++) L.push_back(arr[i]);
    for(int i = mid+1; i <= b; i++) R.push_back(arr[i]);

    L.push_back(INT_MAX);
    R.push_back(INT_MAX);
    int i = 0, j = 0;
    for(int k = a; k <= b; k++) {
        if(L[i] < R[j]) arr[k] = L[i++];
        else arr[k] = R[j++];
    }
}

void mergeSort(vector<int> &arr, int a, int b) {
    int mid;
    if(a < b){
        mid = (a+b)/2;
        mergeSort(arr, a, mid);
        mergeSort(arr, mid+1, b);
        merge(arr, a, mid, b);
    } 
}

int main() {
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    //O(n logn)
    mergeSort(arr, 0, arr.size()-1);
    for(auto x: arr) cout << x << "  ";
    cout << "\n";
    return 0;
}
