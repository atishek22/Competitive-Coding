#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <utility>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    int num;
    vector<pair<int, int>> arr;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(make_pair(num, i));
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;
    bool flag = false;
    while(i < j) {
        int req = arr[i].first + arr[j].first;
        if( req == x) {
            flag = true;
            break;
        } else if(req > x) j--;
        else i++;
    }
    if(!flag) cout << "IMPOSSIBLE\n";
    else cout << ++arr[i].second << " " << ++arr[j].second << "\n";
    return 0;
}
