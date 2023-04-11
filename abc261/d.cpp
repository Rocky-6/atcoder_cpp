#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int M, N;
ll X[5009];
int C[5009], Y[5009];

int main() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) cin >> X[i];
    for (int i = 1; i <= M; i++) cin >> C[i] >> Y[i];

    ll dp[5009][2][5009];

    dp[0][0][0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k <= i; k++) {
            }
        }
    }

    return 0;
}