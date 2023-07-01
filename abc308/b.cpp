#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    vector<string> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }
    map<string, int> mp;
    int p0;
    cin >> p0;
    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        mp[d[i]] = p;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (mp.count(c[i]) == 0)
            ans += p0;
        else
            ans += mp[c[i]];
    }

    cout << ans << endl;

    return 0;
}
