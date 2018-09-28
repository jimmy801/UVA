// 1星-62 Simple Addition 

// 先輸入數字
// 計算範圍內的F(x)和
// F(x) = x % 10 (if x % 10 > 0)
// F(x) = 0 (if x = 0)
// F(x) = F(x / 10) (if x % 10 = 0 && x > 9)

#include <iostream>

using namespace std;

long long caculate(long long a)
{
	if (!a)return 0;
	long long sum = 0;
	while (a)
	{
		long long mod = a % 10;
		sum += (1 + mod)*mod / 2;
		sum += (a / 10) * 45;
		a /= 10;
	}
	return sum;
}

int main()
{
	int num1, num2;
	while (cin >> num1 >> num2&&num1>0)cout << caculate(num2) - caculate(num1 - 1) << endl;
}