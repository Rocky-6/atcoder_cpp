#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> G(n);
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            ll a;
            cin >> a;
            if (a) G[i].push_back(j);
        }
    }

    ll q;
    cin >> q;
    while (q--) {
        ll s, t;
        cin >> s >> t;
        s--;
        t--;
        s %= n;
        t %= n;

        vector<pair<ll, ll>> dist(n, {-1, 0});
        queue<ll> que;
        dist[s].first = 0;
        if (s != t) dist[s].second++;
        que.push(s);

        while (!que.empty()) {
            ll v = que.front();
            que.pop();
            for (auto nv : G[v]) {
                if (dist[nv].second == 1) continue;

                dist[nv].first = dist[v].first + 1;
                dist[nv].second++;
                que.push(nv);
            }
        }
        if (s == t && dist[t].second == 0)
            cout << -1 << endl;
        else
            cout << dist[t].first << endl;
    }

    return 0;
}
