#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    map<ll, ll> ab;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        ab[a] += b;
    }

    for (auto itr = ab.begin(); itr != ab.end(); itr++) {
        if (itr->first <= k)
            k += itr->second;
        else {
            break;
        }
    }
    cout << k << endl;
    return 0;
}
