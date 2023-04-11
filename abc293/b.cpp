#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> p(n, false);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!p[i])
        {
            p[x-1] = true;
        }
    }

    vector<int> ans;
    
    for (int i = 0; i < n; i++)
    {
        if (!p[i])
        {
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size()-1; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << ans[ans.size()-1] << endl;
    
    

    return 0;
}
