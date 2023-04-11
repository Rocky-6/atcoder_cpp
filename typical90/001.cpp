#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll n, k, l;
ll a[1 << 18];

bool hantei(ll min) {
    ll cnt = 0, pre = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] - pre >= min && l - a[i] >= min) {
            pre = a[i];
            cnt++;
        }
    }
    if (cnt >= k)
        return true;
    else
        return false;
}

int main() {
    cin >> n >> l;
    cin >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll left = -1, right = l + 1;
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;
        if (hantei(mid) == false)
            right = mid;
        else
            left = mid;
    }

    cout << left << endl;
    return 0;
}
