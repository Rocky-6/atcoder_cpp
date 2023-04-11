#include <iostream>
#include <string>

using namespace std;

string s;
int n, k;
int nex[100009][26];

int main() {
		cin >> n >> k;
		cin >> s;

		for(int i = 0; i < 26; i++)
				nex[s.size()][i] = s.size();
		for(int i = (int)s.size() - 1; i >= 0; i--) {
				for(int j = 0; j < 26; j++) {
						if((int)(s[i] - 'a') == j) {
								nex[i][j] = i;
						} else {
								nex[i][j] = nex[i + 1][j];
						}
				}
		}

		string answer = "";
		int currentpos = 0;
		for(int i = 1; i <= k; i++) {
				for(int j = 0; j < 26; j++) {
						int nexpos = nex[currentpos][j];
						int max_possible_length = (int)(s.size() - nexpos - 1) + i;
						if(max_possible_length >= k) {
								answer += (char)('a' + j);
								currentpos = nexpos + 1;
								break;
						}
				}
		}
		cout << answer << endl;

		return 0;
}
