#include <bits/stdc++.h>

using namespace std;

double dp[305][305][305];
bool flag[305][305][305];
int n;

double f(int c1, int c2, int c3) {
    if (flag[c1][c2][c3]) return dp[c1][c2][c3];
    flag[c1][c2][c3] = true;
    double x = (double)n / (c1 + c2 + c3);
    if (isinf(x)) x = 0;
    double fans = x;
    if (c1 > 0) fans += f(c1 - 1, c2, c3) * ((double)c1 / n) * x;
    if (c2 > 0) fans += f(c1 + 1, c2 - 1, c3) * ((double)c2 / n) * x;
    if (c3 > 0) fans += f(c1, c2 + 1, c3 - 1) * ((double)c3 / n) * x;
    dp[c1][c2][c3] = fans;
    return dp[c1][c2][c3];
}

int main() {
    cin >> n;
    vector<int> a(n + 1);
    vector<int> c(4);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        c[a[i]]++;
    }
    for (int i = 1; i < c[1]; i++) {
        for (int j = 1; j < c[2]; j++) {
            for (int k = 1; k < c[3]; k++) {
                flag[i][j][k] = false;
            }
        }
    }

    double ans = f(c[1], c[2], c[3]);
    cout << setprecision(20) << ans << endl;
    return 0;
}