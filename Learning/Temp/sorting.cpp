#include <algorithm>
#include<bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

struct point;

void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void print(int* v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void print(vector<pair<int, int>> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    cout << "\n";
}

void print(vector<tuple<int, int, int>> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << "\t";
    }
    cout << "\n";
}

void print(vector<string> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

////goes over every pair of the elements possible and if the 
////element are not in the right order they are swapped
//void bubbleSort(int* arr, int n) {
//    print(arr, 10);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//    print(arr, 10);
//}

// Sorting in practice
// sort() function efficiently sorts the content of a data structure
// sort() requires that the data structure to be sorted provides a 
// comparison operator

//Comparison function

bool comp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    else return  a.size() < b.size();
}

int main() {

    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    //Sorting a vector
    vector<int> v = { 4, 2, 5, 3, 5, 8, 3 };
    //sorting in increasing order
    sort(v.begin(), v.end());
    print(v);

    //sorting in decreasing order
    sort(v.rbegin(), v.rend());
    print(v);

    //Sorting a simple array
    int n = 7;
    int a[] = { 4,2,5,3,5,8,3 };
    sort(a, a + n);
    print(a, n);

    //Sorting a string default: Alphabetical order
    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << endl;

    //Sorting a pair of values
    // default: based on first value then the second value
    vector<pair<int, int>> v2;
    v2.push_back({ 1,5 });
    v2.push_back({ 2,3 });
    v2.push_back({ 1,2 });
    sort(v2.begin(), v2.end());
    print(v2);

    //sorting a tuple
    vector<tuple<int, int, int>> v3;
    v3.push_back({ 2,1,4 });
    v3.push_back({ 1,5,3 });
    v3.push_back({ 2,1,3 });
    sort(v3.begin(), v3.end());
    print(v3);

    //sorting a vector of strings according to the comparison function
    vector<string> v4 = { "444","22", "1", "333" ,"666666" };
    sort(v4.begin(), v4.end(), comp);
    print(v4);
    return 0;
}

// defining a comparison function for a data structure
struct point {
    int x, y;
    bool operator< (const point& p) {
        if (x == p.x) return y < p.y;
        else return x < p.x;
    }
};
