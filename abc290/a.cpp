#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a[100], b;
    int sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b;
        sum += a[b-1];
    }
    
    cout << sum << endl;
    
    return 0;
}
