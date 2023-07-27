#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int diff = a + b - c * d;
    if (diff >= a) {
        cout << -1 << endl;
        return 0;
    }

    int i = 0;
    while (a > 0) {
        a += b - c * d;
        i++;
    }
    cout << i << endl;
    return 0;
}
