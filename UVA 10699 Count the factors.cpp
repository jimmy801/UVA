// 1星-52 Count the factors 

// 先輸入數字
// 輸出該數字有幾個質因數

#include <iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		if (!num)break;
		cout << num << " : ";
		int total = 0;
		if (!(num % 2))++total;
		while (!(num % 2))num /= 2;
		for (int i = 3; i <= num; i += 2)
		if (!(num%i)){ ++total; while (!(num%i))num /= i; }
		cout << total << endl;
	}
}