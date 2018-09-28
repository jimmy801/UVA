// 1星-77 GCD

// 輸入數字
// 輸出從1到該數字之間所有最大公因數和

#include <iostream>

using namespace std;

int GCD(int num1, int num2)
{
	while (num1 %= num2)swap(num1, num2);
	return num2;
}

int main()
{
	int num;
	while (cin >> num&&num)
	{
		int G = 0;
		for (int i = 1; i<num; ++i)
		for (int j = i + 1; j <= num; ++j)
			G += GCD(i, j);
		cout << G << endl;
	}
}