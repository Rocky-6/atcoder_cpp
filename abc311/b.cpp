#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int maxd = 0;
    int xd = 0;
    for (int i = 0; i < d; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (s[j][i] == 'x') flag = false;
        }
        if (flag)
            xd++;
        else
            xd = 0;
        maxd = max(maxd, xd);
    }
    cout << maxd << endl;
    return 0;
}
