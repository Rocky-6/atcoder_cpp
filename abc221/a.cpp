#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long ans = 1;
    while (a > b) {
        ans *= 32;
        a--;
    }
    cout << ans << endl;
    return 0;
}
