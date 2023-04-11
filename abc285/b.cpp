#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (s[j] != s[j+i]) tmp = j+1;
            else break;
        }
        ans.push_back(tmp);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    return 0;
}
