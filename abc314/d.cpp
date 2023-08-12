#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<int, char>> state(n);
    for (int i = 0; i < n; i++) {
        state[i] = make_pair(0, s[i]);
    }

    pair<int, int> all = make_pair(0, 0);
    int q;
    cin >> q;
    int tt = q;
    while (q--) {
        int t, x;
        char c;
        cin >> t >> x >> c;
        if (t == 1) {
            state[x - 1] = make_pair(tt - q, c);
        }
        if (t == 2) all = make_pair(tt - q, -1);
        if (t == 3) all = make_pair(tt - q, 1);
    }

    for (auto s : state) {
        if (s.first > all.first)
            cout << s.second;
        else {
            if (all.second == 1) {
                if (s.second <= 'z' && s.second >= 'a')
                    cout << (char)(s.second - 32);
                else
                    cout << s.second;
            }
            if (all.second == -1) {
                if (s.second <= 'Z' && s.second >= 'A')
                    cout << (char)(s.second + 32);
                else
                    cout << s.second;
            }
            if (all.second == 0) {
                cout << s.second;
            }
        }
    }
    cout << endl;
    return 0;
}
