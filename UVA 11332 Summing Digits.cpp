// 1星-73 Summing Digits 

// 輸入數字
// 輸出該數字所有位數和
// 如果該數字相加後大於9就繼續加到<=9

#include <iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num && num)cout << (num - 1) % 9 + 1 << endl;
}