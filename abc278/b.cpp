#include <bits/stdc++.h>

using namespace std;

bool judge(int h, int m) { return h <= 23 && m <= 59; }

int main() {
    int h, m;
    cin >> h >> m;
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;
    int ac = a * 10 + c;
    int bd = b * 10 + d;

    if (judge(ac, bd)) {
        cout << h << ' ' << m << endl;
        return 0;
    }

    while (1) {
        m++;
        if (m == 60) h++, m = 0;
        if (h == 24) h = 0;
        a = h / 10;
        b = h % 10;
        c = m / 10;
        d = m % 10;
        ac = a * 10 + c;
        bd = b * 10 + d;
        if (judge(ac, bd)) {
            cout << h << ' ' << m << endl;
            return 0;
        }
    }

    return 0;
}
