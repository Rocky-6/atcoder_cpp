#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((a - 1) / 3 != (b - 1) / 3) {
        cout << "No" << endl;
        return 0;
    }
    if (abs(a - b) != 1) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}
