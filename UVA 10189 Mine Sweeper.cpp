// 1�P-32 Mine Sweeper 

// ����J1�ӼƦr�N��n���X����a�p
// ��J1�ӼƦr�N��n���X���X����a�p
// ��J�C��ҥN���F��('*'�N��a�p�A'.'�N��i�򪺮�l)
// ��J��F���Ǯ�l('x'�N��򪺮�l�A'.'�N��S�ʪ���l)
// ��X�򪺮�l���Ʀr(�Y�H�Ӯ欰���ߤ��E�c�椺�����a�p��)�A�Y���a�p�h��X�Ҧ��a�p��m

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