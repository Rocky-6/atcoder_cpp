#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    int ans;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        auto c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            ans = i+1;
        }
        
    }
    cout << ans << endl;
    return 0;
}
