#include<bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    vector<pair<int, int>> movie;
    int count = 0, start, end;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> start >> end;
        movie.push_back(make_pair(start, end));
    }

    sort(movie.begin(), movie.end(), comp);
    if(movie.empty()) {
        cout << 0 << "\n";
        return 0;
    }
    end = movie[0].second;
    count = 1 ;
    for(auto x: movie) {
        if(end <= x.first) {
            count++;
            end = x.second;
        }
    }
    cout << count << "\n";
    return 0;
}
