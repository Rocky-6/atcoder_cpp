#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            if (cnt == 1) {
                cout << "No" << endl;
                return 0;
            }
            cnt++;
            if (s[i] == t[i + 1] && s[i + 1] == t[i])
                i++;
            else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
