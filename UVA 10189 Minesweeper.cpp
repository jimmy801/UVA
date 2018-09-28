// 1星-17 Minesweeper 

// 先輸入要幾成幾的踩地雷
// 輸入"."表示空的格子"*"表示地雷
// 在空的格子中輸出該格的9宮格內的地雷總數，如果該格為地雷則輸出"*"

#include <iostream>

using namespace std;

int main()
{
	char graph[100][100], number[100][100];
	int n, m, k = 1;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> graph[i][j];
				if (graph[i][j] != '*')number[i][j] = '0';
				if (graph[i][j] == '*')number[i][j] = '*';
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (number[i][j] == '*')continue;

				if (graph[i - 1][j] == '*'  && i - 1 >= 0)number[i][j]++;
				if (graph[i - 1][j - 1] == '*' && i - 1 >= 0 && j - 1 >= 0)number[i][j]++;
				if (graph[i - 1][j + 1] == '*' && i - 1 >= 0 && j + 1 <= m)number[i][j]++;
				if (graph[i][j + 1] == '*' && j + 1 <= m)number[i][j]++;
				if (graph[i][j - 1] == '*' && j - 1 >= 0)number[i][j]++;
				if (graph[i + 1][j] == '*'  && i + 1 <= n)number[i][j]++;
				if (graph[i + 1][j - 1] == '*' && i + 1 <= n && j - 1 >= 0)number[i][j]++;
				if (graph[i + 1][j + 1] == '*' && i + 1 <= n && j + 1 <= m)number[i][j]++;
			}
		}

		if(k>1)cout << endl;
		cout << "Field #" << k << ":\n";
		k++;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++)cout << number[i][j]; cout << endl;
		}
	}
}