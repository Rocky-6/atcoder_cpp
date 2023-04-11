#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> b;
    for (int i = 0; i < 8; i++) {
        if (s[i] == 'B') b.push_back(i);
    }

    if (b[0] % 2 == b[1] % 2) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < 8; i++) {
        if (s[i] == 'R') {
            i++;
            while (i < 8) {
                if (s[i] == 'K') {
                    cout << "Yes" << endl;
                    return 0;
                } else if (s[i] == 'R') {
                    cout << "No" << endl;
                    return 0;
                }
                i++;
            }
        }
    }
}