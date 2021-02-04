#include <bits/stdc++.h>

using namespace std;

//Dynamic Arrays: Vectors
void dynamicArraysVector() {
    //Ways to initialise a vector
    vector<int> v = { 2, 4, 5, 7, 1 };
    // vector<int> v{ 2, 4, 5, 7, 1 }; also works

    vector<int> a(8); //size 8, initial value 0
    vector<int> b(8, 2); //size 8, initial value 2

    v.back(); // returns the last element of the vector
    v.push_back(3); //add at the end of the vector
    v.pop_back(); //remove the last element of the vector
}

// Iterator and Ranges
void iter_range() {
    vector<int> v = { 2, 4, 5, 7, 1 };
    v.begin(); // iterator points at the first element of the vector
    v.end(); // iterator points at the position after the last element of the vector
    *v.begin(); // gives the value pointed by the iterator

    //defining range for the C++ standard functions 
    reverse(v.begin(), v.end());
    random_shuffle(v.begin(), v.end());
    sort(v.begin(), v.end());

    auto a = lower_bound(v.begin(), v.end(), 3); //gives an iterator to the value in a sorted range whose value is atleast x
    auto b = upper_bound(v.begin(), v.end(), 5); //gives an iterator to the value just greater than x
    //incase of no element v.end() is returned
    //works only for sorted ranges 
    cout << *a << " " << *b << "\n";
}

//deque: Dynamic array that can be manipulated on both ends
void dynamicArrayDeque() {
    //usually slower than vectors
    deque<int> d;
    d.push_back(5);
    d.push_front(2);
    d.pop_back();
    d.pop_front();
}

void standardStack_and_Queue() {
    stack<int> s;
    s.push(2);
    s.push(5);
    s.pop();
    cout << s.top() << "\n";

    queue<int> q;
    q.push(2);
    q.push(5);
    cout << q.front() << " " << q.back() << "\n";
    q.pop();
    q.pop();
}

//Sets - Efficient - insertion, removal and search
void sets_and_multisets() {
    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(2);
    cout << s.count(2) << "\n"; // will give 1 ; redundant values are not stored
    cout << s.count(5) << "\n";
    s.erase(2);
    s.insert(4);
    //printing the elements of a set
    for (auto x : s) {
        cout << x << "\t";
    } cout << "\n";

    s.find(2); // returns an iterator pointing to the value else returns s.end()
    //upper_bound and lower_bound functions are also available

    multiset<int> ms; //allows redundant values
    ms.insert(5);
    ms.insert(5);
    cout << ms.count(5) << "\n";
    ms.erase(5); // removes all the copies of x;
    ms.insert(5);
    ms.insert(5);
    ms.erase(ms.find(5)); //this will erase only one value
    // it is not efficient to use count in a multiset
}

//map: contains key value pairs
//map: balanced binary search trees and unordered_map: hash table
void standardMap() {
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    cout << m["banana"] << "\n";
    cout << m["something Random"] << "\n"; //since this key doesn't belong to the map it is added and an initial value is assigned
    m.count("key"); // this checks if a key is present in the map
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }
}

//priority queue: similar to multiset but faster; implemented as a heap
void standardPqueue() {
    //by default the queue is sorted in decreasing order
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n";
    q.pop();
    cout << q.top() << "\n";

    //to get a priority queue sorted in increasing order
    priority_queue<int, vector<int>, greater<int>> q2;
    q2.push(3);
    q2.push(5);
    q2.push(7);
    q2.push(2);
    cout << q2.top() << "\n";
    q2.pop();
    cout << q2.top() << "\n";
}

//policy based structures: not part of the standard library
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

//defining indexed sets implemented as an order statistics tree
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

void indexedSets() {
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    //the elements can be indexed as in a sorted array
    auto x = s.find_by_order(2); // returns an iterator to the element of index x;
    cout << *x << "\n";

    cout << s.order_of_key(7) << "\n"; //returns the order (index of the element)
    // if the element doesn't occur in the set it would return the position that element would be inserted at
}


//Sorting is faster than set and unordered_set
//Arrays are much faster than map and unordered_map
//priority_queue is faster than multiset

int main() {
    indexedSets();
    return 0;
}