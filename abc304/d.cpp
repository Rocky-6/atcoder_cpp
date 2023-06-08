#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll w, h;
    cin >> w >> h;
    int n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    int a;
    cin >> a;
    vector<ll> tate(a);
    for (auto& tatex : tate) cin >> tatex;
    tate.push_back(w);
    sort(tate.begin(), tate.end());
    int b;
    cin >> b;
    vector<ll> yoko(b);
    for (auto& yokox : yoko) cin >> yokox;
    yoko.push_back(h);
    sort(yoko.begin(), yoko.end());
    map<pair<int, int>, int> mp;
    int m, M = 0;
    for (int i = 0; i < n; i++) {
        auto ai =
            lower_bound(tate.begin(), tate.end(), p[i].first) - tate.begin();
        auto bi =
            lower_bound(yoko.begin(), yoko.end(), p[i].second) - yoko.begin();
        auto x = pair<int, int>(ai, bi);
        mp[x]++;
        M = max(M, mp[x]);
    }

    if (mp.size() == (a + 1) * (b + 1)) {
        for (auto p : mp) m = min(m, p.second);
    } else
        m = 0;
    cout << m << ' ' << M << endl;

    return 0;
}
