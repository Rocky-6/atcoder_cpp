#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << '=' << endl;
        return 0;
    }
    if (c % 2 == 0 && abs(a) == abs(b)) {
        cout << '=' << endl;
        return 0;
    }

    if (a > 0 && b > 0) {
        if (a > b) cout << '>' << endl;
        if (a < b) cout << '<' << endl;
    } else if (a < 0 && b > 0) {
        a = -a;
        if (c % 2 == 1)
            cout << '<' << endl;
        else {
            if (a > b) cout << '>' << endl;
            if (a < b) cout << '<' << endl;
        }
    } else if (a > 0 && b < 0) {
        b = -b;
        if (c % 2 == 1)
            cout << '>' << endl;
        else {
            if (a > b) cout << '>' << endl;
            if (a < b) cout << '<' << endl;
        }
    } else if (a < 0 && b < 0) {
        if (c % 2 == 0) {
            if (a < b) cout << '>' << endl;
            if (a > b) cout << '<' << endl;
        } else {
            if (a > b) cout << '>' << endl;
            if (a < b) cout << '<' << endl;
        }
    } else if (a == 0) {
        if (c % 2 == 0)
            cout << '<' << endl;
        else {
            if (b > 0) cout << '<' << endl;
            if (b < 0) cout << '>' << endl;
        }
    } else if (b == 0) {
        if (c % 2 == 0)
            cout << '>' << endl;
        else {
            if (a > 0) cout << '>' << endl;
            if (a < 0) cout << '<' << endl;
        }
    }
    return 0;
}
