#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long p = 0, q = 0;
        for (long long i = 2; i < n; i++) {
            if (n % i != 0) continue;
            if ((n / i) % i == 0) {
                p = i;
                q = n / i / i;
            } else {
                q = i;
                p = sqrt(n / i);
            }
            break;
        }
        cout << p << ' ' << q << endl;
    }

    return 0;
}
