#include <iostream>

using namespace std;
using ll = long long;
ll mod = 1000000007;
const int MAX_N = 33;

ll n, b, k;
ll c[10];

struct Matrix {
		int sz;
		ll x[MAX_N][MAX_N];
};

Matrix multiply(Matrix A, Matrix B) {
		Matrix C;
		C.sz = A.sz;
		for (int i = 0; i < C.sz; i++) {
				for (int j = 0; j < C.sz; j++) {
						C.x[i][j] = 0;
				}
		}

		for (int i = 0; i < A.sz; i++) {
				for (int j = 0; j < A.sz; j++) {
						for (int k = 0; k < A.sz; k++) {
								C.x[i][k] += A.x[i][j] * B.x[j][k];
								C.x[i][k] %= mod;
						}
				}
		}
		return C;
}

Matrix powers(Matrix A, ll T) {
		Matrix E[64], F;
		E[0] = A;
		for (int i = 1; i < 62; i++) {
				E[i] = multiply(E[i - 1], E[i - 1]);
		}

		F.sz = E[0].sz;
		for (int i = 0; i < F.sz; i++) {
				for (int j = 0; j < F.sz; j++) {
						if (i == j) F.x[i][j] = 1;
						if (i != j) F.x[i][j] = 0;
				}
		}

		for (int i = 62; i >= 0; i--) {
				if ((T & (1LL << i)) != 0LL) {
						F = multiply(F, E[i]);
				}
		}
		return F;
}

int main() {
		cin >> n >> b >> k;
		for (int i = 1; i <= k; i++) cin >> c[i];

		Matrix A;
		A.sz = b;
		for (int i = 0; i < b; i++) {
				for (int j = 0; j < b; j++) {
						A.x[i][j] = 0;
				}
		}

		for (int i = 0; i < b; i++) {
				for (int j = 1; j <= k; j++) {
						int nex = (i * 10 + c[j]) % b;
						A.x[i][nex] += 1;
				}
		}

		Matrix Z = powers(A, n);

		ll Answer = Z.x[0][0];
		cout << Answer << endl;

		return 0;
}
