#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    cin >> x;
    bool flag = true;
    for (int i = 0; i < 3; i++) {
        if (x[i + 1] != x[i]) flag = false;
    }
    if (flag) {
        cout << "Weak" << endl;
        return 0;
    }

    flag = true;
    for (int i = 0; i < 3; i++) {
        if (x[i + 1] - '0' != ((x[i] - '0') + 1) % 10) flag = false;
    }
    if (flag) {
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;

    return 0;
}
