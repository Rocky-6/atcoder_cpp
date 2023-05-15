#include <bits/stdc++.h>

using namespace std;

vector<char> atcoder = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
bool is_at(char c) {
    for (auto x : atcoder) {
        if (c == x) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;

    string s_not, t_not;
    int at;
    string s_is, t_is;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@') {
            at++;
            continue;
        }

        if (is_at(s[i]))
            s_is += s[i];
        else
            s_not += s[i];
    }

    for (int i = 0; i < s.size(); i++) {
        if (t[i] == '@') {
            at++;
            continue;
        }

        if (is_at(t[i]))
            t_is += t[i];
        else
            t_not += t[i];
    }

    sort(s_not.begin(), s_not.end());
    sort(t_not.begin(), t_not.end());
    if (s_not != t_not) {
        cout << "No" << endl;
        return 0;
    }

    sort(s_is.begin(), s_is.end());
    sort(t_is.begin(), t_is.end());
    if (s_is != t_is) {
        map<char, int> mp_s, mp_t;
        for (auto ns : s_is) mp_s[ns]++;
        for (auto nt : t_is) mp_t[nt]++;
        for (auto x : atcoder) {
            at -= abs(mp_s[x] - mp_t[x]);
        }
        if (at < 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
