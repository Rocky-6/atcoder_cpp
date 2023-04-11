#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans[1000];
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        ans[i] = a + b;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    
    
    return 0;
}
