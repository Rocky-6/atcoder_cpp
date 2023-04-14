#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long ans = 0;
    vector<vector<int>> x(s.length() + 1, vector<int>(10));
    for (int i = 0; i < s.length(); i++) {
        int c = s[i] - '0';
        x[i + 1] = x[i];
        x[i + 1][c] ^= 1;
    }
    map<vector<int>, int> mp;
    for (int i = 0; i < s.length() + 1; i++) {
        mp[x[i]]++;
    }

    for (auto p : mp) {
        long long n = p.second;
        ans += n * (n - 1) / 2;
    }

    cout << ans << endl;
    return 0;
}
