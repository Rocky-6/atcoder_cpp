#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	int a[11][11];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> a[i][j];
		}
	}
	
	int ans = 0;
	for (int bit = 0; bit < (1<<(h+w-2)); bit++)
	{
		int flag = 0;
		for (int i = 0; i < h+w-2; i++)
		{
			if (bit & (1<<i))
			{
				flag++;
			}
		}
		if (flag != h-1)
		{
			continue;
		}

		set<int> s;
		s.insert(a[0][0]);
		int x = 0, y = 0;
		for (int i = 0; i < h+w-2; i++)
		{
			if (bit & (1<<i))
			{
				y++;
			}
			else
			{
				x++;
			}
			s.insert(a[y][x]);
		}
		if (s.size() == h+w-2+1)
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}