#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    mp[1] = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        mp[2 * i] = mp[a] + 1;
        mp[2 * i + 1] = mp[a] + 1;
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        cout << itr->second << endl;
    }
    return 0;
}
