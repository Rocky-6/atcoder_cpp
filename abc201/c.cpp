#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    set<int> aru, wakaranai;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'o') aru.insert(i);
        if (s[i] == '?') wakaranai.insert(i);
    }
    int ans = 0;
    for (int i = 0; i < 10000; i++) {
        int pass = i;
        set<int> num;
        bool flag = true;
        for (int j = 0; j < 4; j++) {
            if (aru.count(pass % 10) != 0) num.insert(pass % 10);
            if (aru.count(pass % 10) == 0 && wakaranai.count(pass % 10) == 0) {
                flag = false;
                break;
            }
            pass /= 10;
        }
        if (flag && num == aru) ans++;
    }

    cout << ans << endl;

    return 0;
}
