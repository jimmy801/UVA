// 1星-51 f91

// 先輸入數字
// 如果該數字>100輸出其減10的結果
// 不然輸出91

#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		cout << "f91(" << n << ") = ";
		if (n>100)cout << n - 10 << endl;
		else cout << "91\n";
	}
}