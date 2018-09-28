// UVA-10407 Simple division
// 輸入一連串數字(以0結尾)
// 該串數字共同除以某一數字的餘數會相等
// 輸出該除數

#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)return a;
	else return gcd(b, a % b);
}
int main()
{
	int number = 0, number2 = 0, n = 0, tmp = 0, diff[1500] = { 0 };
	while (cin >> number && number)
	{
		while (cin >> number2 && number2)
		{
			diff[n] = abs(number - number2);
			n++;
		}
		tmp = diff[0];
		for (int i = 1; i < n; ++i)tmp = gcd(tmp, diff[i]);
		cout << tmp << endl;
		n = 0;
	}
}