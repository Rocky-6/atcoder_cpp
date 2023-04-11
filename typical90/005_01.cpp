#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll mod = 1000000007;
ll n, b, k;
ll c[10];

ll dp[10009][33];

int main() {
	cin >> n >> b >> k;
	for(int i = 1; i <= k; i++)
		cin >> c[i];

	dp[0][0] = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < b; j++) {
			for(int l = 1; l <= k; l++) {
				int nex = (10 * j + c[l]) % b;
				dp[i + 1][nex] += dp[i][j];
				dp[i + 1][nex] %= mod;
			}
		}
	}
	
	cout << dp[n][0] << endl;

	return 0;
}
