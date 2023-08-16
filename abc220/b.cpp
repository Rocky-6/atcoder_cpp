#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    string a, b;
    cin >> a >> b;
    int ax = 0, bx = 0;
    for (auto c : a) {
        int cx = c - '0';
        ax = ax * k + cx;
    }
    for (auto c : b) {
        int cx = c - '0';
        bx = bx * k + cx;
    }
    cout << (long long)ax * bx << endl;
    return 0;
}
