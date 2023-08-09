#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    char sep;
    cin >> x >> sep >> y;
    cout << x;
    if (y >= 0 && y <= 2) cout << '-';
    if (y >= 7 && y <= 9) cout << '+';
    cout << endl;
    return 0;
}
