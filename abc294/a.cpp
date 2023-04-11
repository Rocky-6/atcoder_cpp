#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int a[100];
    vector<int> ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            ans.push_back(a[i]);
        }
    }

    for (int i = 0; i < ans.size()-1; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << ans[ans.size()-1] << endl;
    
    
    return 0;
}
