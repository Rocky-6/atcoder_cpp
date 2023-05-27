#include <bits/stdc++.h>

using namespace std;

char f(char c) {
    if (c == '1') return 'l';
    if (c == '0') return 'o';
    return c;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    cin >> t;
    for (int i = 0; i < n; i++) {
        if (f(s[i]) != f(t[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
