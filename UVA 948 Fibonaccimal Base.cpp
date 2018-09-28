// 1星-95 Fibonaccimal Base 

// 輸入幾組測資
// 輸入數字
// 輸出該數字換成費式進制

#include <iostream>

using namespace std;

int main()
{
	int n, num, fib[39];
	fib[0] = 1, fib[1] = 1;
	for (int i = 2; i<39; ++i)fib[i] = fib[i - 1] + fib[i - 2];
	cin >> n;
	while (n--)
	{
		cin >> num;
		cout << num << " = ";
		bool o = 0;
		for (int i = 38; i>0; --i)
		{
			if (num >= fib[i]){ cout << "1"; ++o, num -= fib[i]; }
			else if (o)cout << "0";
		}
		cout << " (fib)\n";
	}
}