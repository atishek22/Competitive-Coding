#include<bits/stdc++.h>

using namespace std;

#define n 8
#define num 5

//Longest Increasing Subsequence
void LIS(int* arr, int* length) {
    for (int k = 0; k < n; k++) {
        length[k] = 1;
        for (int i = 0; i < k; i++) {
            if (arr[i] < arr[k]) {
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }
}

//Path in a grid
int sum[10][10]{};

void Path(int arr[num + 1][num + 1]) {
    for (int y = 1; y <= num; y++) {
        for (int x = 1; x <= num; x++) {
            sum[y][x] = max(sum[y][x - 1], sum[y - 1][x]) + arr[y][x];
        }
    }
}

//KnapSack Problem
 

int main() {
    // int arr[8] = { 6,2,5,1,7,4,8,3 };
    // int length[8];
    // int val = 0;
    // LIS(arr, length);
    // for (int i = 0; i < n; i++) {
    //     cout << length[i] << " ";
    //     val = max(val, length[i]);
    // }
    // cout << "\n" << val << "\n";
    int arr[num + 1][num + 1] = { {0,0,0,0,0,0},
                                  {0,3,7,9,2,7},
                                  {0,9,8,3,5,5},
                                  {0,1,7,9,8,5},
                                  {0,3,8,6,4,10},
                                  {0,6,3,9,7,8} };
    Path(arr);
    cout << sum[5][5] << "\n";
    return 0;
}