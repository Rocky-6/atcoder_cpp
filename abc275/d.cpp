#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    map<ll, ll> memo;

    auto f = [&](auto f, ll n) -> ll {
        if (n == 0) return 1;
        if (memo.count(n) != 0) return memo[n];
        memo[n] = f(f, n / 2) + f(f, n / 3);
        return memo[n];
    };

    cout << f(f, n) << endl;
    return 0;
}
