// 1星-41 Eb Alto Saxophone Player 

// 先輸入有幾個case
// 輸入每筆會按那些音
// 輸出最後每根手指按幾個次

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string f = "c0111001111d0111001110e0111001100f0111001000g0111000000a0110000000b0100000000C0010000000D1111001110E1111001100F1111001000G1111000000A1110000000B1100000000";
	string push;
	int times;
	while (cin >> times)
	while (times--)
	{
		bool now[10] = {}; int ans[10] = {};
		cin >> push;
		for (int k = 0; k < push.size(); ++k)
		for (int j = 0, i = f.find(push[k]) + 1; i < f.find(push[k]) + 11; ++i, ++j)
		{
			if (now[j] && f[i] == '0')now[j] = 0;
			else if (!now[j] && f[i] == '1'){ ++ans[j], ++now[j]; }
		}
		for (int i = 0; i < 10; ++i){ if (i)cout << ' '; cout << ans[i]; }
		cout << endl;
	}
}