#include<bits/stdc++.h>

using namespace std;

#define n 8

// here the col represents the columns, diag1 the right to left diagnol and diag2 the other diagonal
bool col[n*n], diag1[n * n], diag2[n * n];
int Count = 0;

void search(int y){
    if(y == n) {
        Count++;
        return;
    } 

    for(int i = 0; i < n; i++) {
        if(col[i] || diag1[i + y] || diag2[i - y + n - 1]) // a queen has already been placed 
            continue;
        col[i] = diag1[i + y] = diag2[i - y + n - 1] = true; // place a queen
        search(y+1); // searching for the next place
        col[i] = diag1[i + y] = diag2[i - y + n - 1] = false; // remove the queen
    }
}

int main() {
    search(0);
    cout << Count << "\n";
    return 0;
}
