#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll ten(string s) {
    ll x = 0;
    for (int i = 0; i < s.size(); i++) x = x * 2 + (s[i] - '0');
    return x;
}

bool f(string s, ll n) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '?') s[i] = '0';

    return ten(s) <= n;
}

int main() {
    string s;
    cin >> s;
    ll n;
    cin >> n;

    if (!f(s, n)) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            s[i] = '1';
            if (!f(s, n)) s[i] = '0';
        }
    }

    cout << ten(s) << endl;

    return 0;
}
