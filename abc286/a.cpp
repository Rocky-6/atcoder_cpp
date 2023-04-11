#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i <= q-p; i++)
    {
        int tmp = a[p+i];
        a[p+i] = a[r+i];
        a[r+i] = tmp;
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
