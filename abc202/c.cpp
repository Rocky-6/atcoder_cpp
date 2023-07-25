#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<ll, ll> mpa;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mpa[a]++;
    }
    map<ll, ll> mpb;
    for (int i = 1; i <= n; i++) {
        int b;
        cin >> b;
        if (mpa.count(b) != 0) mpb[i] = mpa[b];
    }
    map<ll, ll> mpc;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        ans += mpb[c];
    }
    cout << ans << endl;

    return 0;
}
