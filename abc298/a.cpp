#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int good = 0;
    int bad = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') good++;
        if (s[i] == 'x') bad++;
    }
    if (good >= 1 && bad == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
