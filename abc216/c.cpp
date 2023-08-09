#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<char> ans;
    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
            ans.push_back('B');
        } else {
            n--;
            ans.push_back('A');
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto a : ans) cout << a;
    cout << endl;
    return 0;
}
