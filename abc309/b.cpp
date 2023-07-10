#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[105][105];
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    cout << a[1][0];
    for (int j = 0; j < n - 1; j++) {
        cout << a[0][j];
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++) {
        cout << a[i + 2][0];
        for (int j = 1; j < n - 1; j++) {
            cout << a[i + 1][j];
        }
        cout << a[i][n - 1] << endl;
    }
    for (int i = 1; i < n; i++) {
        cout << a[n - 1][i];
    }
    cout << a[n - 2][n - 1] << endl;

    return 0;
}
