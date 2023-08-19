#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string aiueo = "aiueo";
    string ans;
    for (int i = 0; i < s.size(); i++) {
        bool flag = true;
        for (int j = 0; j < 5; j++) {
            if (s[i] == aiueo[j]) {
                flag = false;
            }
        }
        if (flag) ans += s[i];
    }
    cout << ans << endl;
    return 0;
}
