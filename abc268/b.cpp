#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    if (s.size() > t.size()) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
