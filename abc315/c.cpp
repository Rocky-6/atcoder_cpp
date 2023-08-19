#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> f(n), s(n);
    map<int, priority_queue<int>> mpque;
    for (int i = 0; i < n; i++) {
        cin >> f[i] >> s[i];
        mpque[f[i]].push(s[i]);
    }

    int x = 0;
    int x_index = 0;
    for (auto itr = mpque.begin(); itr != mpque.end(); itr++) {
        if (itr->second.top() > x) {
            x = itr->second.top();
            x_index = itr->first;
        }
    }
    mpque[x_index].pop();
    if (mpque[x_index].empty()) mpque.erase(x_index);
    int y = 0;
    for (auto itr = mpque.begin(); itr != mpque.end(); itr++) {
        if (itr->first == x_index) {
            if (itr->second.top() / 2 > y) {
                y = itr->second.top() / 2;
            }
        } else {
            if (itr->second.top() > y) {
                y = itr->second.top();
                // x_index = itr->first;
            }
        }
    }
    cout << x + y << endl;

    return 0;
}
