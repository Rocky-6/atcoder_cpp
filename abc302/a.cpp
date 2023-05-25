#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;
    ll count;
    if (a % b == 0)
        count = a / b;
    else
        count = a / b + 1;
    cout << count << endl;
    return 0;
}
