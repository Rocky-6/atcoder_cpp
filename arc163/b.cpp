#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int cleared = 0;
    vector<int> clear, low, high;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 1) {
            if (a[0] <= a[i] && a[1] >= a[i]) {
                clear.push_back(a[i]);
                cleared++;
            } else if (a[0] > a[i]) {
                low.push_back(a[i]);
            } else if (a[1] < a[i]) {
                high.push_back(a[i]);
            }
        }
    }
    sort(clear.begin(), clear.end());
    sort(low.begin(), low.end());
    sort(high.begin(), high.end());
    if (cleared >= m) {
        cout << 0 << endl;
        return 0;
    }
    int count = 0;
    int up = a[1], down = a[0];
    while (cleared < m) {
        if (low.size() == 0 || down - low.back() > high.front() - up) {
            count += high.front() - up;
            up = high.front();
            high.erase(high.begin());
            cleared++;
        } else if (high.size() == 0 || down - low.back() < high.front() - up) {
            count += down - low.front();
            down = low.back();
            low.pop_back();
            cleared++;
        } else {
                }
    }

    cout << count << endl;

    return 0;
}
