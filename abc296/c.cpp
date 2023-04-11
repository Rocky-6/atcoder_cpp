#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i] + x;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (binary_search(a.begin(), a.end(), v[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    
    
    return 0;
}
