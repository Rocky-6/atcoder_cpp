#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int n, x, y;
ll red(int level);
ll blue(int level);

int main() {
    cin >> n >> x >> y;
    cout << red(n) << endl;

    return 0;
}

ll red(int level) {
    if (level == 1)
        return 0;
    else
        return red(level - 1) + x * blue(level);
}

ll blue(int level) {
    if (level == 1)
        return 1;
    else
        return red(level - 1) + y * blue(level - 1);
}