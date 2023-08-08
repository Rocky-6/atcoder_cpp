#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;  // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }
    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> s(m + 1, true);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        auto p = prime_factorize(a);
        for (auto &[px, ex] : p) {
            if (s[px]) {
                for (int j = px; j <= m; j += px) {
                    s[j] = false;
                }
            }
        }
    }

    vector<int> ans;
    for (int i = 1; i <= m; i++) {
        if (s[i]) ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (auto ax : ans) cout << ax << endl;

    return 0;
}
