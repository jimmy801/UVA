// UVA 10323 Factorial! You Must be Kidding!!!

#include <iostream>

using namespace std;

int main()
{
	long long num, factorial[14];
	factorial[0] = factorial[1] = 1;
	for (int i = 2; i < 14; ++i)factorial[i] = i * factorial[i - 1];
	while (cin >> num)
	{
		if (num < 0)num = (0 - num) % 2 ? 14 : 0;
		if (num > 13)cout << "Overflow!\n";
		else if (factorial[num] < 10000)cout << "Underflow!\n";
		else cout << factorial[num] << endl;
	}
}