#include<bits/stdc++.h>

using namespace std;

//largest possible sum value from the given array
#define n 3000
//O(n^3)
void sumBasic(int *arr) {
    int best = 0;
    for(int a = 0; a < n; a++) {
        for(int b = 1; b < n ; b++) {       
            //here the a and b set the indices of the array
            int sum = 0;
            for(int k = a; k <= b; k++) {
                sum += arr[k];
            }
            //storing only the 
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

//Better approach O(n^2)
//calculate the sum at the time the end index moves
void sumBetter(int *arr) {
    int best = 0;
    for(int a = 0; a < n; a++) {
        int sum = 0;
        for(int b = a; b < n; b++){
            sum += arr[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

// Best approach not obvious O(n)
// the required subarray either contains the element at postion k or
// the subarray from some start position and k is on of its element
void sumBest(int *arr) {
    int best = 0, sum = 0;
    for(int k = 0; k < n; k++) {
        sum = max(arr[k], sum+arr[k]);
        best = max(best, sum);
    }
    cout<< best << "\n";
}

int main() {
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = n - 2*i;
    }
    sumBasic(arr);
    sumBetter(arr);
    sumBest(arr);
}
