/*
 * Problem - https://cses.fi/problemset/task/1084
 *
 * Solutions - Sort the applicant and appartment arrays, Start at the first indexes
 *             if appartment fits then increase the count and both the indexes
 *             if the appartment doesn't fit go to the next apartment and check
 *             if greater then move the applicant index else move the appartment index
 *
 */

#include<bits/stdc++.h>
#include <cstdint>

using namespace std;

int *applicants, *apartment;

bool test(int i, int j, int k) {
    if((applicants[i] + k) >= apartment[j] && (applicants[i] - k) <= apartment[j]) return true;
    return false;
}

int solve(int n, int m, int k) {
    int count = 0;
    int i = 0, j = 0;

    sort(applicants, applicants+n);
    sort(apartment, apartment + m);

    while(i <  n && j < m) {
        if(test(i, j, k)) {
            count++;
            i++; j++;
        } else {
            if(j < m && apartment[j] - k > applicants[i]) {
                i++;
            } else {
                j++;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    applicants = new int[n]; apartment = new int[m];
    for(int i = 0; i < n; i++) {
       cin >>  applicants[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> apartment[i];
    }

    cout << solve(n,m,k) << "\n";
    return 0;
}
