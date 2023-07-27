#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t x;
    cin >> x;
    if (x >= 0 || x % 10 == 0)
        cout << x / 10 << endl;
    else
        cout << x / 10 - 1 << endl;
}
