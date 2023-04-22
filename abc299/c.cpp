#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int ans = 0;
    string o, x;
    for (int i = 0; i < n; i++) {
        o.push_back('o');
        x.push_back('-');
    }

    if (o == s || x == s) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') count++;
        if (s[i + 1] != s[i]) {
            ans = max(ans, count);
            count = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
