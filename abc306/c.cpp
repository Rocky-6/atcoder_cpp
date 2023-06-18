#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> st;
    map<int, int> mp;
    for (int i = 0; i < 3 * n; i++) {
        int a;
        cin >> a;
        if (st.count(a) == 0)
            st.insert(a);
        else if (st.count(a) != 0 && mp.count(a) == 0)
            mp[a] = i + 1;
        else
            continue;
    }

    vector<pair<int, int>> arr;
    for (const auto &item : mp) {
        arr.emplace_back(item);
    }
    std::sort(arr.begin(), arr.end(),
              [](const auto &x, const auto &y) { return x.second < y.second; });

    for (const auto &x : arr) {
        cout << x.first << ' ';
    }
    cout << endl;
    return 0;
}
