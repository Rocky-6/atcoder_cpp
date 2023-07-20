#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n, 0);
    multiset<int> f, nf;
    ll s = 0;
    for (int i = 0; i < k; i++) {
        f.insert(0);
    }
    for (int i = k; i < n; i++) {
        nf.insert(0);
    }

    auto balance = [&]() {
        while (f.size() < k) {
            auto nfi = nf.end();
            nfi--;
            f.insert(*nfi);
            s += *nfi;
            nf.erase(nfi);
        }
        if (f.empty() || nf.empty()) return;

        while (1) {
            auto fi = f.begin();
            auto nfi = nf.end();
            nfi--;
            int ef = *fi;
            int enf = *nfi;
            if (ef >= enf) break;
            s += enf - ef;
            f.erase(fi);
            nf.erase(nfi);
            f.insert(enf);
            nf.insert(ef);
        }
    };

    auto add = [&](int v) {
        nf.insert(v);
        balance();
    };

    auto erase = [&](int v) {
        auto fi = f.find(v);
        if (fi != f.end()) {
            s -= v;
            f.erase(fi);
        } else {
            nf.erase(nf.find(v));
        }
        balance();
    };

    while (q--) {
        int x, y;
        cin >> x >> y;
        x--;
        add(y);
        erase(a[x]);
        a[x] = y;
        cout << s << endl;
    }

    return 0;
}
