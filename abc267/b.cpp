#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '1') {
        cout << "No" << endl;
        return 0;
    }
    map<int, int> mp;

    if (s[1] == '1') mp[2] = 1;
    if (s[2] == '1') mp[4] = 1;
    if (s[3] == '1') mp[1] = 1;
    if (s[4] == '1') mp[3] = 1;
    if (s[5] == '1') mp[5] = 1;
    if (s[6] == '1') mp[0] = 1;
    if (s[7] == '1') mp[2] = 1;
    if (s[8] == '1') mp[4] = 1;
    if (s[9] == '1') mp[6] = 1;

    bool flag = false;
    for (int i = 0; i < 7; i++) {
        if (mp[i] == 1) flag = true;
        if (mp[i] == 0 && flag) {
            for (int j = i + 1; j < 7; j++) {
                if (mp[j] == 1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
