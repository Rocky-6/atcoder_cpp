#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }

    ll ans = n * (n - 1) / 2;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        ans -= itr->second * (itr->second - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}
