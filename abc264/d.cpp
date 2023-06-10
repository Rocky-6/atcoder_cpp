#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t = "atcoder";
    cin >> s;
    int n = t.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++) mp[t[i]] = i;
    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = mp[s[i]];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
