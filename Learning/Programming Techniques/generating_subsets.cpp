#include<bits/stdc++.h>

using namespace std;

#define n 4
vector<int> subsets;

void search(int k) {
    if(k == n+1) {
        //a subset is built, process it here
        for(int x: subsets) {
            cout << x << " ";
        } cout << "\n";
    } else {
        //haven't gone through all the numbers
        subsets.push_back(k);
        search(k+1); //find all the subsets containing k
        subsets.pop_back();
        search(k+1); //find all the subsets not containing k
    }
}

int main() {
    search(1);
}