#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> str;
    vector<string> permutations;
    sort(str.begin(), str.end());
    do {
        permutations.push_back(str);
    } while(next_permutation(str.begin(), str.end()));
    cout << permutations.size() << "\n";
    for(auto s: permutations) {
        cout << s <<"\n";
    }
    return 0;
}
