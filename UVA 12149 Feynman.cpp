// UVA 12149 Feynman
// 輸入數字
// 輸出該數字n*n所形成的正方形中可以有幾個小正方形
// (即為1~n的平方和)

#include <iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num && num)
		cout << num*(num + 1)*(2 * num + 1) / 6 << endl;
}