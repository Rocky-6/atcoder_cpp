#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T')
            t++;
        else
            a++;
        if (s.size() % 2 == 0) {
            if (t == s.size() / 2 || a == s.size() / 2) break;
        }
    }
    if (t > a)
        cout << 'T' << endl;
    else
        cout << 'A' << endl;
    return 0;
}
