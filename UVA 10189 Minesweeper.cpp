// 1�P-17 Minesweeper 

// ����J�n�X���X����a�p
// ��J"."��ܪŪ���l"*"��ܦa�p
// �b�Ū���l����X�Ӯ檺9�c�椺���a�p�`�ơA�p�G�Ӯ欰�a�p�h��X"*"

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