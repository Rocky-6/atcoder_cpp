#include <iostream>
#include <vector>

using namespace std;

int N;
char A[1009][1009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j)
                continue;
            else {
                if (A[i][j] == 'W' && A[j][i] != 'L') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                if (A[i][j] == 'L' && A[j][i] != 'W') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                if (A[i][j] == 'D' && A[j][i] != 'D') {
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "correct" << endl;

    return 0;
}
