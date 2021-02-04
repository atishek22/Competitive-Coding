#include<bits/stdc++.h>

using namespace std;

char t[30];
string input, input1, Time, output = "";
int up, down, mainTime;

int time1(int i) {
    int n = (t[i] - 48) * 1000 + (t[i + 1] - 48) * 100 + (t[i + 3] - 48) * 10 + (t[i + 4] - 48);
    if (n >= 1200) n -= 1200;
    if (t[i + 6] == 'P') n += 1200;
    if (n == 2400) n = 0;
    return n;
}

int main() {
    long ans = 0;
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T, N;
    getline(cin, input);
    stringstream line(input);
    line >> T;
    for (int i = 0; i < T; i++) {
        output = "";
        stringstream line2;
        ans = 0;
        cin.getline(t, 30, '\n');
        mainTime = time1(0);
        getline(cin, input1);
        line2.str(input1);
        line2 >> N;
        for (int i = 0; i < N; i++) {
            cin.getline(t, 30, '\n');
            up = time1(0);
            down = time1(9);
            if (mainTime >= up && mainTime <= down) {
                output.append("1");
            }
            else {
                output.append("0");
            }
        }
        cout << output << "\n";
    }
    return 0;
}