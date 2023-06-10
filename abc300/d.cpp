#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool IsPrime(ll num) {
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ll n;
    cin >> n;
    int ans = 0;
    for (ll i = 2; i * i * i * i * i <= n; i++) {
        if (!IsPrime(i)) continue;
        ll a, b, c;
        a = i;
        ll bc2 = n / (a * a);
        for (ll j = i + 1; j * j * j <= bc2; j++) {
            if (!IsPrime(j)) continue;
            b = j;
            ll c2 = bc2 / b;
            for (ll k = j + 1; k * k <= c2; k++) {
                if (!IsPrime(k)) continue;
                c = k;
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
