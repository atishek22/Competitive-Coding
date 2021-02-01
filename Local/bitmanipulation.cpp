#include<bits/stdc++.h>

using namespace std;
void print(int n);

//bit representation of an integer;
void bit(int x) {
    for(int k = 31; k >= 0; k--) {
        if(x&(1<<k)) cout << "1"; //gives an int bit mask 1LL<<k gives a long bit mask
        else cout << "0";
    }
    cout << endl;
}

//subset representation as bits 
//set operations
void operations() {
    int x = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 8); // x = {1, 3, 4, 8}
    int y = (1 << 3) | (1 << 6) | (1 << 8) | (1 << 9); // y = {3, 6, 8, 9}
    //union of sets x and y = x|y
    //intersection = x&y
    //complement = ~x
    //difference = x & (~b)
    int z = x|y;
    cout<<__builtin_popcount(z) << "\n";
    print(z); 
//    //process the elements of the subsets of {0, ... , n-1}
//    for(int b = 0; b <  (1<<n); b++){
//        //process subset b
//    }

//    //process subsets with exactly k elements
//    for(int b = 0; b < (1 << n); b++) {
//        if(__builtin_popcount(b) == k) {
//            //process the subset
//        }
//    }

//    //go through the subsets of a set x
//    int b = 0;
//    do {
//        //process the subset
//    } while(b = (b-x) & x); 
//    // here b-x gives the gives the rightmost one digit in x which is not set in b and sets it
}

void sets() {
    //this function can represent a a set from 0 to 31
    //the subset contains the elements 1, 3, 4, 8
    int x = 0;
    x |= (1 << 1);
    x |= (1 << 3);
    x |= (1 << 4);
    x |= (1 << 8);
    cout<< __builtin_popcount(x) << "\n"; //prints the number of elements in the set
    print(x);
}

//this function prints the elements in the subset
void print(int n) {
    for(int i = 0; i < 32; i++) {
        if(n&1 << i) {
            cout<<i <<" ";
        } 
    } cout << "\n";
}

//c++ bitsets
void standardBitset() {
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n";
    cout << s[5] << "\n";
    //number of ones 
    cout << s.count();
//    //bit operations can directly be done on bitsets
//    bitset<10> a, b;
//    bitset<10> c = a&b;
}

int main() {
//
//    int x = -43;
//    unsigned int y = ~x;
//    cout<<x<< endl << y << endl;
//    
//
//    //built-in g++ function for bit manipulation
//
//    int y = 5328;
//    bit(y);
//    cout<< __builtin_clz(y) << "\n"; //number of zeroes at the beginning of the bit representation
//    cout<< __builtin_ctz(y) <<"\n"; // number of zeroes at the end of the bit representation
//    cout<< __builtin_popcount(y) << "\n"; //number of ones in the bit representation
//    cout<< __builtin_parity(y)<<"\n"; //the parity of ones in the representation
//
//    sets();

    operations();
    return 0;
}
