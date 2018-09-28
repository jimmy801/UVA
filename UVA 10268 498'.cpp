// 1星-31 498'

// 先輸入一個代表x的值
// 接著輸入一連串數字代表a_0,a_1....a_n
// 輸出a_0 * n * x^(n-1) + a_1 * (n-1) * x^(n-2) + ... + a_(n-1)

#include <iostream>

using namespace std;

int main()
{
	int x; char a[1000];
	while (cin >> x)
	{
		cin.ignore();
		cin.get(a, 1000, '\n'); cin.ignore();
		int int_a[1000] = { 0 };
		int ans = 0;int n = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] == ' ')continue;
			if (a[i] == '-')
			{
				int_a[n] = 0 - a[i + 1] + '0'; i++; n++;
				continue;
			}
			int_a[n] = a[i] - '0';
			n++;
		}
		for(int i = 0; i < n - 1; i++)
		{
			ans += int_a[i] * (n - i - 1) * pow(x, n - i - 2); 
		}
		cout << ans << endl;
	}
}