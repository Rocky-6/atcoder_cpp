#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, x, y, z;
int a[1009], b[1009];
vector<int> c;
vector<bool> passed(1009, false);

int main() {
    cin >> n >> x >> y >> z;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 1; i <= n; i++) c.push_back(10000 * (100 - a[i]) + i);
    sort(c.begin(), c.end());
    for (int i = 0; i < x; i++) passed[c[i] % 10000] = true;

    c.clear();

    for (int i = 1; i <= n; i++) c.push_back(10000 * (100 - b[i]) + i);
    sort(c.begin(), c.end());
    for (int i = 0; i < y; i++) {
        if (passed[c[i] % 10000]) y++;
        passed[c[i] % 10000] = true;
    }

    c.clear();

    for (int i = 1; i <= n; i++) c.push_back(10000 * (200 - a[i] - b[i]) + i);
    sort(c.begin(), c.end());
    for (int i = 0; i < z; i++) {
        if (passed[c[i] % 10000]) z++;
        passed[c[i] % 10000] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (passed[i]) cout << i << endl;
    }
}