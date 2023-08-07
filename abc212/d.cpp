#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> que;
    ll s = 0;
    while (q--) {
        int query;
        cin >> query;
        switch (query) {
            case 1:
                ll x1;
                cin >> x1;
                que.push(x1 - s);
                break;
            case 2:
                ll x2;
                cin >> x2;
                s += x2;
                break;
            case 3:
                cout << que.top() + s << endl;
                que.pop();
            default:
                break;
        }
    }
    return 0;
}
