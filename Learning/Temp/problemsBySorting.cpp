#include<bits/stdc++.h>

using namespace std;

//check for a unique element
//O(n^2) approach
bool slowUniqueElement(int* arr, int n) {
    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) ok = false;
        }
    }
    return ok;
}

//can be made into an O(nlogn) algo by sorting 
//the array and checking if consecutive elements are same
bool fastUniqueElement(int* arr, int size) {
    bool ok = true;
    sort(arr, arr + size);
    for (int i = 0; i < size; i++) {
        if (arr[i] == arr[i + 1]) ok = false;
    }
    return ok;
}

//Sweep line algorithm : events that need to be processed in sorted order
//Scheduling events: Sort the elements according to their ending time and pick the event that ends as early as possible
//Task and Deadlines: Sort the elements according to their durations and pick the shortest task

int main() {
    cout << "Nigga \n";
    return 0;
}