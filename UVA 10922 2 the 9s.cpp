// 1星-57 2 the 9s 

// 先輸入數字(很長)
// 如果不是9的倍數，輸出該數字非9的倍數
// 否則輸出該數字是9的幾次方
// PS: 9的倍數為所有位數相加仍為9的倍數
//     次方計算則是看該數字所有位數相加如果還是9的倍數就多一次方直到該數的位數和為9或非9的倍數為止
// EX1: 999 = > 27(9 + 9 + 9, 1階) = > 9(2 + 7, 2階)
// EX2: 99999 99999 99999 99999 9 = > 189(9 + 9 + ... + 9, 1階) = > 18(1 + 8 + 9, 2階) = > 9(1 + 8, 3階)

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		if (str == "0")break;
		int num = 0;
		for (int i = 0; i<str.size(); ++i)num += str[i] - '0';
		cout << str;
		if (num % 9){ cout << " is not a multiple of 9.\n"; continue; }
		cout << " is a multiple of 9 and has 9-degree ";
		int degree = 1;
		while (num > 9)
		{
			int tmp = 0;
			while (num > 9){ tmp += num % 10; num /= 10; }
			num = tmp;
			++degree;
		}
		cout << degree << ".\n";
	}
}