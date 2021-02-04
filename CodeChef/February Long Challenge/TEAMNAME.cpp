#include<bits/stdc++.h>

using namespace std;

// int solve(string* str, int N) {
//     unordered_set<string> test;
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         test.insert(str[i]);
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (str[i][0] != str[j][0]) {
//                 string first{ str[i] };
//                 string second{ str[j] };
//                 char temp = first[0];
//                 first[0] = second[0];
//                 second[0] = temp;
//                 if (test.find(first) == test.end() && test.find(second) == test.end()) {
//                     count += 2;
//                 }
//             }
//         }
//     }
//     return count;
// }

int solve(string* str, int N, unordered_set<string> test) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        test.insert(str[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (str[i][0] != str[j][0]) {
                string first{ str[i] };
                string second{ str[j] };
                char temp = first[0];
                first[0] = second[0];
                second[0] = temp;
                if (test.find(first) == test.end() && test.find(second) == test.end()) {
                    count += 2;
                }
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        auto str = new string[N];
        unordered_set<string> test;
        for (int i = 0; i < N; i++) {
            cin >> str[i];
            test.insert(str[i]);
        }
        cout << solve(str, N, test) << "\n";
        delete[](str);
    }
    return 0;
}
