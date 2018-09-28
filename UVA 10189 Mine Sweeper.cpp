// 1星-32 Mine Sweeper 

// 先輸入1個數字代表要玩幾次踩地雷
// 輸入1個數字代表要玩幾成幾的踩地雷
// 輸入每格所代表的東西('*'代表地雷，'.'代表可踩的格子)
// 輸入踩了那些格子('x'代表踩的格子，'.'代表沒動的格子)
// 輸出踩的格子的數字(即以該格為中心之九宮格內有的地雷數)，若踩到地雷則輸出所有地雷位置

#include <iostream>

using namespace std;

int main()
{
	int time, number[10][10] = { 0 }; char pic[10][10], touch[10][10];
	while (cin >> time)
	{
		for (int t = 0; t < time; t++)
		{
			int n; cin >> n;
			for (int i = 0; i < n; i++)	for (int j = 0; j < n; j++)
			{
				cin >> pic[i][j];
				if (pic[i][j] == '*')
				{
					number[i][j] = -1000;
					if (i == 0 && j == 0)
					{
						number[i + 1][j]++;
						number[i][j + 1]++;
						number[i + 1][j + 1]++;
						continue;
					}
					if (i == 0 && j == n - 1)
					{
						number[i + 1][j]++;
						number[i][j - 1]++;
						number[i + 1][j - 1]++;
						continue;
					}
					if (i == 0)
					{
						number[i + 1][j]++;
						number[i][j + 1]++;
						number[i + 1][j + 1]++;
						number[i][j - 1]++;
						number[i + 1][j - 1]++;
						continue;
					}
					if (i == n - 1 && j == 0)
					{
						number[i - 1][j]++;
						number[i][j + 1]++;
						number[i - 1][j + 1]++;
						continue;
					}
					if (i == n - 1 && j == n - 1)
					{
						number[i - 1][j]++;
						number[i][j - 1]++;
						number[i - 1][j - 1]++;
						continue;
					}
					if (i == n - 1)
					{
						number[i - 1][j]++;
						number[i][j + 1]++;
						number[i - 1][j + 1]++;
						number[i][j - 1]++;
						number[i - 1][j - 1]++;
						continue;
					}
					if (j == 0)
					{
						number[i + 1][j]++;
						number[i][j + 1]++;
						number[i + 1][j + 1]++;
						number[i - 1][j + 1]++;
						number[i - 1][j]++;
						continue;
					}
					if (j == n - 1)
					{
						number[i + 1][j]++;
						number[i][j - 1]++;
						number[i + 1][j - 1]++;
						number[i - 1][j - 1]++;
						number[i - 1][j]++;
						continue;
					}
					number[i][j - 1]++;
					number[i][j + 1]++;
					number[i - 1][j]++;
					number[i + 1][j]++;
					number[i - 1][j - 1]++;
					number[i - 1][j + 1]++;
					number[i + 1][j + 1]++;
					number[i + 1][j - 1]++;
				}
			}
			for (int i = 0; i < n; i++)	for (int j = 0; j < n; j++)cin >> touch[i][j];
			bool bomb = false;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (bomb && number[i][j] >= 0 && touch[i][j] != 'x'){ cout << '.'; continue; }
					if (touch[i][j] == 'x')
					{
						if (pic[i][j] == '*'){ bomb = true; }
						if (number[i][j] >= 0)cout << number[i][j];
						if (number[i][j] < 0 && bomb)cout << '*';
					}
					else cout << '.';
				}
				if (i < n - 1)cout << endl;
			}
		}
	}
}