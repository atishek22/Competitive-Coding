#include <algorithm>
#include<bits/stdc++.h>
#include <cstdio>
#include <functional>
#include <vector>

using namespace std;

int main() {
    int n, m, num;
    // input
    cin >> n >> m;
    vector<int> cost, price;
    multiset<int, greater<int>> tickets;
    for(int i = 0; i < n; i++) {
        cin >> num;
        tickets.insert(num);
    }
    for(int i = 0; i < m; i++) {
        cin >> num;
        cost.push_back(num);
    }
    
    //solve
    for(auto t: cost) {
        if(tickets.empty()) {
            price.push_back(-1);
            continue;
        }
        auto p = tickets.upper_bound(t);
        auto copy = p;
        if(*--copy == t) {
            tickets.erase(tickets.find(t));
            price.push_back(t);
        }
        else if(p == tickets.end()) {
            price.push_back(-1);
        }
        else {
            int val = *p;
            tickets.erase(p);
            price.push_back(val);
        }
    }

    for(auto x: price) {
        cout << x << "\n";
    }
    return 0;
}
