#include<bits/stdc++.h>
#include <cstring>
#include <unordered_map>

using namespace std;

void solve(unordered_map<char, int> chars, int count) {
    char *str = new char[count + 1];
    int i, j;
    int len = count;
    for(auto ch: chars) {
        if(ch.second & 1) {
            if(count & 1) {
                str[count/2] = ch.first;
                count--;
                chars[ch.first]--;
            } else {
                cout << "NO SOLUTION\n";
                return;
            }
        }
    }
    i = 0; j = len - 1;
    for(auto ch: chars) {
        char letter = ch.first;
        int c = ch.second;
        while(c) {
            str[i++] = str[j--] = letter;
            c -= 2;
        }
    }
    str[len] = '\0';
    cout << str << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    unordered_map<char, int> chars;
    int count = 0;
    char ch;
    while(true) {
        ch = cin.get();
        if(ch == '\n') break;
        count++;
        if(chars.find(ch) == chars.end()) chars[ch] = 1;
        else chars[ch] ++;
    }
    solve(chars,count);
    return 0;
}
