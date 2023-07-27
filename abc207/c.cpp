#include <bits/stdc++.h>

using namespace std;

bool f(pair<double, double> i, pair<double, double> j) {
    if (i.first >= j.first && i.first <= j.second) return true;
    if (i.second >= j.first && i.second <= j.second) return true;
    if (j.first >= i.first && j.first <= i.second) return true;
    if (j.second >= i.first && j.second <= i.second) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<pair<double, double>> lr;
    for (int i = 0; i < n; i++) {
        int t;
        double l, r;
        cin >> t >> l >> r;
        if (t == 2) r -= 0.1;
        if (t == 3) l += 0.1;
        if (t == 4) l += 0.1, r -= 0.1;
        lr.push_back(make_pair(l, r));
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (f(lr[i], lr[j])) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
