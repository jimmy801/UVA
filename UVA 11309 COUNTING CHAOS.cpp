// 1星-71 COUNTING CHAOS 

// 輸入共有幾組測資
// 分別輸入時間
// 輸出從那時間之後的對稱時間
// PS:如果是0點，忽略小時0點的0

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, h, m, zero[] = { 8, 11, 22, 33, 44, 55 }, hour[] = { 0, 10, 20, 30, 40, 50, -1, -1, -1, -1, 1, 11, 21, 31, 41, 51, -1, -1, -1, -1, 2, 12, 22, 32, 0 };
	char o;
	cin >> n;
	while (n--)
	{
		cin >> h >> o >> m;
		if (!h)
		{
			if (m>54)cout << "01:10\n";
			else if (m<9)cout << "00:0" << ++m << endl;
			else for (int i = 4; i >= 0; --i)if (m>zero[i]){ cout << "00:" << zero[i + 1] << endl; break; }
		}
		else
		{
			if (m >= hour[h])
			{
				while (hour[++h]<0);
				if (h>23)h = 0;
			}
			cout << setw(2) << setfill('0') << h << ":" << setw(2) << hour[h] << endl;
		}
	}
}