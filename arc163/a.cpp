#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 1; i < n; i++) {
            string mae = s.substr(0, i), usiro = s.substr(i);
            if (mae < usiro) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
