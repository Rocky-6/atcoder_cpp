#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, d, k;
        cin >> n >> d >> k;
        k--;
        cout << (long long)k * d % n + k / (n / gcd(n, d)) << endl;
    }

    return 0;
}
