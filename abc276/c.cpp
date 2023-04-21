#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p;

    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi;
        p.push_back(pi);
    }

    prev_permutation(p.begin(), p.end());
    for (auto ans : p) cout << ans << ' ';
    cout << endl;

    return 0;
}
