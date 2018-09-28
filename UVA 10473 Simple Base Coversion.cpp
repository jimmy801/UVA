// 1星-45 Simple Base Coversion

// 先輸入數字
// 如果該數字是10進位(前沒"0x")，輸出16進位的該數字(前要"0x")
// 如果該數字是16進位(前有"0x")，輸出10進位的該數字
// 如果該數字是負數則跳過

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;
	while (cin >> num)
	{
		if (num[0] == '-')continue;
		if (num[1] == 'x')cout << dec << strtol(num.c_str(), NULL, 16) << endl;
		else cout << "0x" << uppercase << hex << atoi(num.c_str()) << endl;
	}
}