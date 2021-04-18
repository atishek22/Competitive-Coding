#include<bits/stdc++.h>
#include <iostream>

using namespace std;

//O(n^3) solution
void brute_force(vector<int> arr) {
    int best = 0;
    for(int a = 0; a < arr.size(); a++) {
        for(int b = a; b < arr.size(); b++ ) {
            int sum = 0;
            for(int k = a; k <= b; k++) {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }
    cout << "Brute Force method:" << best << "\n";
}

//O(n^2) - summing the elements when the end index of the sub-array is moved
void faster_solution(vector<int> arr) {
    int best = 0;
    for(int a = 0; a < arr.size(); a++) {
        int sum = 0;
        for(int b = a; b < arr.size(); b++) {
            sum += arr[b];
            best = max(best, sum);
        }
    }
    cout << "Faster method: " << best <<"\n";
}

//O(n) - The sub array either contains the element at k or the sub-array ending at k-1 and the element at k
void fastest_solution(vector<int> arr) {
    int best = 0;
    int sum = 0;
    for(auto e: arr) {
        sum = max(e, sum+e);
        best = max(best, sum) ;
    }
    cout << "Fastest method: " << best << "\n";
}

int main() {
    cout << "Maximum Sub-array sum \n";
    vector<int> arr = {-1, 2, 4, -3, 5, 2, -5, 2};
    brute_force(arr);
    faster_solution(arr);
    fastest_solution(arr);
    return 0;
}
