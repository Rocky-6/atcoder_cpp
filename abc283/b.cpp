#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;
    vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1) {
            int k, x;
            cin >> k >> x;
            k--;
            a[k] = x;
        } else {
            int k;
            cin >> k;
            k--;
            ans.push_back(a[k]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    
    
    return 0;
}
