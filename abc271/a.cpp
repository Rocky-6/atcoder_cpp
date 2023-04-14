#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n / 16 <= 9)
        cout << n / 16;
    else
        cout << char('A' + n / 16 - 10);

    n %= 16;
    if (n <= 9)
        cout << n;
    else
        cout << char('A' + n - 10);

    cout << endl;
    return 0;
}