#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char x = 'a';
    for (int i = 0; i < 8; i++)
    {
        cin >> s;
        for (int j = 7; j >= 0; j--)
        {
            if (s[j] == '*')
            {
                cout << char(x+i) << j+1 << endl;
            }
            
        }
        
    }
    
    return 0;
}
