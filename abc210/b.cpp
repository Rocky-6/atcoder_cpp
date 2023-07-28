#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i % 2 == 0)
                cout << "Takahashi" << endl;
            else
                cout << "Aoki" << endl;
            return 0;
        }
    }

    return 0;
}
