#include<bits/stdc++.h>
#include <bitset>

using namespace std;

//printing the elements in the set
void printSet(int x) {
    for(int i = 0; i < 32; i++) {
        if(x&(1<<i)) cout << i << "  ";
    } cout << "\n";
}

int main() {
    int x = 0; // defnining an empty set (a subset of {0, 1, 2, ... 31})
    //adding element to the set
    x |= (1 << 1); //adding 1 to the set
    x |= (1 << 3); //adding 3 to the set
    x |= (1 << 4); //adding 4 to the set
    x |= (1 << 8); //adding 8 to the set

    int y = 0;

    y |= (1 << 10); // adding 10 to the set
    y |= (1 << 3); // adding 3 to the set
    y |= (1 << 4); // adding 4 to the set
    y |= (1 << 7); // adding 7 to the set

    cout <<"Number of elements in x "<< __builtin_popcount(x) << "\n";
    cout << "Number of elements in y " << __builtin_popcount(y) << "\n";

    //taking union of the two sets 
    int uni = x & y;
    int intersection = x | y;
    int complement = ~x;
    int difference = x &(~y);

    cout << "Union = ";
    printSet(uni);
    cout<< "Intersection = ";
    printSet(intersection);
    cout << "Complement = ";
    printSet(complement);
    cout << "Difference = ";
    printSet(difference);

    //subsets for the set {0, 1, 2, ..., n-1}
    int n = 30;
    for(int i = 0; i < (1 << n); i++) {
        //work with the subset
        //now if we want only those subsets with exactly k elements
        int k = 10;
        if(__builtin_popcount(i) == k) {
            //process the required subsets
        }
    }

    //now to go through the subsets of the set x
    int b = 0;
    do {

    }while(b = (b - x) & x);

    //bitsets standard library
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;

    //printing the number of elements
    cout << "Number of elements in the bitset = " << s.count() << "\n";
    // the above operations on bits direclty apply to bitsets

    return 0;
}
