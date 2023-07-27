#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a;
    for (ll i = 1; i <= n; i++) {
        ll ai;
        cin >> ai;
        a.push_back(make_pair(i, ai));
    }

    sort(a.begin(), a.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
    });

    ll all = k / n;
    ll amari = k % n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i].first] = all;
        if (i + 1 <= amari) mp[a[i].first]++;
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->second << endl;

    return 0;
}
