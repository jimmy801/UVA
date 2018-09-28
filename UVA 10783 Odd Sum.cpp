// 1星-54 Odd Sum

// 先輸入有幾個case
// 再輸入要從哪個數字到哪個數字內的奇數和
// 輸出範圍內的奇數和

#include <iostream>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	for (int i = 1; i <= cases; ++i)
	{
		int first, end;
		cin >> first >> end;
		if (!(first % 2))++first;
		if (!(end % 2))--end;
		cout << "Case " << i << ": " << (first + end)*((end - first) / 2 + 1) / 2 << endl;
	}
}