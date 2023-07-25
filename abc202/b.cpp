#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto &si : s) {
        if (si == '6')
            si = '9';
        else if (si == '9')
            si = '6';
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[s.size() - 1 - i];
    }
    cout << endl;

    return 0;
}
