#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    map<int, vector<char>> mp;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        mp[c[i]].push_back(s[i]);
    }

    map<int, queue<char>> mq;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        int x = itr->second.size();
        for (int i = 0; i <= x; i++) {
            mq[itr->first].push(itr->second[(i - 1 + x) % x]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mq[c[i]].front();
        mq[c[i]].pop();
    }
    cout << endl;
    return 0;
}
