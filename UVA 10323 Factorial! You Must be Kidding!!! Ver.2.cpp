// UVA 10323 Factorial! You Must be Kidding!!!

#include <iostream>

using namespace std;

int main()
{
	int number;
	int i = 1;
	long long x = 1;
	while (cin >> number)
	{
		i = 1, x = 1;
		if (number < 0)x = (0 - number) % 2 ? 6227020801 : 1;
		else if (number < 14)
		while (i <= number)
		{
			x = x * i;
			i++;
		}
		else x = 6227020801;
		if (x<10000)
			cout << "Underflow!" << endl;
		else if (x>6227020800)
			cout << "Overflow!" << endl;
		else
			cout << x << endl;
	}
}