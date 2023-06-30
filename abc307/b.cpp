#include <bits/stdc++.h>

using namespace std;

bool solve(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            string tmp;
            tmp += s[i] + s[j];
            if (solve(tmp)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
