#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t, 0);
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if (a % 2 == 1)  ans[i]++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    
    
    return 0;
}
