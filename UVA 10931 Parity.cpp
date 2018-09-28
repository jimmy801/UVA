// 1星-60 Parity

// 先輸入數字
// 輸出該數字的二進制和該數字是幾(mod 2)(換成二進制之後有幾個1)

#include <iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num && num)
	{
		char binary[31];
		itoa(num, binary, 2);
		int mod = 0;
		cout << "The parity of ";
		for (int i = 0; i<strlen(binary); ++i)
		{
			if (binary[i] - '0')++mod;
			cout << binary[i];
		}
		cout << " is " << mod << " (mod 2).\n";
	}
}