// UVA 256 Quirksome Squares

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int digits, table[4][10], count[4] = {};
	for (int i = 0; i < 10000; ++i)
	for (int j = 0; j < 10000; ++j)
	{
		int len = 10;
		for (int k = 0; k < 4; k++, len *= 10)
		{
			if ((i + j) * (i + j) == i * len + j &&	!(i / len) && !(j / len))
				table[k][count[k]++] = i * len + j;
		}
	}
	while (cin >> digits)
	{
		for (int i = 0; i < count[digits / 2 - 1]; ++i)
			cout << setw(digits) << setfill('0') << table[digits / 2 - 1][i] << endl;
	}
}