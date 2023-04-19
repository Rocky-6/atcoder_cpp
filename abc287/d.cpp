#include <bits/stdc++.h>

using namespace std;

bool is_match_char(char cs, char ct) {
    return cs == ct || cs == '?' || ct == '?';
}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;

    vector<bool> start(t.size(), false), end(t.size(), false);
    for (int i = 0; i < t.size(); i++) {
        if (!is_match_char(s[i], t[i])) break;
        start[i] = true;
    }

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    for (int i = 0; i < t.size(); i++) {
        if (!is_match_char(s[i], t[i])) break;
        end[i] = true;
    }

    for (int i = 0; i <= t.size(); i++) {
        if (i == 0) {
            if (end[t.size() - 1])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        if (i > 0 && i < t.size()) {
            if (start[i - 1] && end[t.size() - i - 1])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        if (i == t.size()) {
            if (start[i - 1])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
