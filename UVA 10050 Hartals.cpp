// 1星-06 Hartals

// 先輸入有幾個case
// 輸入區間天(就是在哪個範圍內的天數)
// 輸入有幾個團體要罷工
// 分別輸入各團體在那區間天內每隔幾天罷工一次
// 依照不同case分別輸出總共那些天數被影響(六日不算)

#include <iostream>

using namespace std;

int main()
{
	int Case, partiesDays[101], parties, Days, ans = 0; bool days[3652] = { false };
	while (cin >> Case)
	{
		for (int i = 0; i < Case; i++)
		{
			cin >> Days >> parties;
			for (int j = 0; j < parties; j++)cin >> partiesDays[j];
			for (int j = 0; j < parties; j++)
			for (int k = 1; k <= Days; k++)
			if (!(k % partiesDays[j]))days[k] = true;
			for (int j = 1; j <= Days; j++)
			if (!(j % 7 % 6))
				days[j] = false;
			for (int j = 1; j <= Days; j++)
			if (days[j]){ ans++; days[j] = false; }
			cout << ans << endl; ans = 0;
		}
	}
}