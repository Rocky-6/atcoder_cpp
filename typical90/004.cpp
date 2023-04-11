#include <iostream>
#include <vector>

using namespace std;

int h, w;
int a[2001][2001];
int rows[2001] = {0};
int cols[2001] = {0};

int main() {
	cin >> h >> w;
	for(int i = 1; i <= h; i++) {
		for(int j = 1; j <= w; j++) {
			cin >> a[i][j];
			rows[i] += a[i][j];
			cols[j] += a[i][j];
		}
	}

	for(int i = 1; i <= h; i++) {
		for(int j = 1; j <= w; j++) {
			cout << rows[i] + cols[j] - a[i][j];
			if(j != w)
				cout << ' ';
		}
		cout << endl;
	}

	return 0;
}
