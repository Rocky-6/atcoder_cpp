#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, t;
    cin >> s >> t;
    long long ans = 0;
    for (int a = 0; a <= s; a++) {
        for (int b = 0; b <= s - a; b++) {
            for (int c = 0; c <= s - a - b; c++) {
                if (a * b * c <= t) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
