#include <bits/stdc++.h>

using namespace std;

int main() {
    bool ans = true;
    int prev;
    cin >> prev;
    for (int i = 1; i < 8; i++) {
        int s;
        cin >> s;
        if (s < prev) ans = false;
        if (s < 100 || s > 675) ans = false;
        if (s % 25 != 0) ans = false;
        prev = s;
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;

    return 0;
}
