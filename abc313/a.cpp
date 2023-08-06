#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p1;
    cin >> p1;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> p(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    if (p1 > p[n - 2])
        cout << 0 << endl;
    else
        cout << p[n - 2] - p1 + 1 << endl;

    return 0;
}
