#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    map<int, ll> mp;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        ll b;
        cin >> a >> b;
        mp[a] += b;
        total += b;
    }
    if (total <= k) {
        cout << 1 << endl;
        return 0;
    }
    auto itr = mp.begin();
    while (total > k) {
        total -= itr->second;
        itr++;
    }
    itr--;
    cout << itr->first + 1 << endl;

    return 0;
}
