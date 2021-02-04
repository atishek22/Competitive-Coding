#include<bits/stdc++.h>

using namespace std;

#define n 3

vector<int> permutations;
bool chosen[n + 1];

void search() {
    if(permutations.size() == n) { // ie all the n elements are present 
        //process the permutation
        for(int x: permutations) {
            cout << x << " ";
        } cout << "\n";
    } else {
        for(int i = 1; i <= n; i++) {
            if(chosen[i]) continue; //ie the number is already in the permutation
            chosen[i] = true;
            permutations.push_back(i); // else we add the number
            search();                  //now search for a new permutation
            chosen[i] = false;
            permutations.pop_back();   //remove the number
        }
    }
}


int main() {
    search();
    
    // instead of writing our own permutations function we can use the built-in function
    cout << "Using the standard library functions \n";
    for(int i = 1; i <= n; i++) {
        //creating the initial vector
        permutations.push_back(i);
    }
    do {
        //process the permutation
        for(int x: permutations) {
            cout << x << " ";
        } cout << "\n";
    } while(next_permutation(permutations.begin(), permutations.end()));
}
