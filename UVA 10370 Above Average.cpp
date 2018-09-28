// 1星-39 Above Average 

// 先輸入有幾個case
// 輸入第一筆有幾個成績
// 輸入每筆成績分數
// 輸出每筆超過平均的人數佔所有的百分之幾

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cases;
	while (cin >> cases)
	{
		int c[1000];
		while (cases--)
		{
			int k;
			cin >> k;
			float av = 0;
			for (int i = 0; i<k; ++i){ cin >> c[i]; av += c[i]; }
			av /= k;
			float o = 0;
			for (int i = 0; i<k; ++i)if (c[i]>av)++o;
			cout << fixed << setprecision(3) << 100 * o / k << "%\n";
		}
	}
}