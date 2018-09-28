// 1星-82 Soda Surpler

// 輸入有幾個case
// 輸入分別case有幾個空瓶子和撿到幾個瓶子還有幾個瓶子可以換一瓶蘇打
// 輸出最多可以喝幾瓶

#include <iostream>

using namespace std;

int main()
{
	int cases, e, f, c;
	cin >> cases;
	while (cases--)
	{
		cin >> e >> f >> c;
		e += f, f = 0;
		while (e / c){ f += e / c, e = e / c + e%c; }
		cout << f << endl;
	}
}