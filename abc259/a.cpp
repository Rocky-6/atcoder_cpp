#include <iostream>
#include <vector>

using namespace std;
int n, m, x, t, d;

int main() {
    cin >> n >> m >> x >> t >> d;
    if (m >= x) {
        cout << t << endl;
    } else {
        cout << t - d * (x - m) << endl;
    }
    return 0;
}
