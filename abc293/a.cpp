#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    string ans;
    cin >> s;
    for (int i = 0; i < s.size(); i=i+2)
    {
        ans.push_back(s[i+1]);
        ans.push_back(s[i]);
    }

    cout << ans << endl;
    
    return 0;
}
