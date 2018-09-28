// 1星-38 Peter's Smokes

// 先輸入抽幾支菸和幾支菸屁股可以再做一支菸
// 輸出最多可以有幾支菸

#include <iostream>

using namespace std;

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		int a = n;
		while (n >= k)a += n / k, n = n / k + n%k;
		cout << a << endl;
	}
}