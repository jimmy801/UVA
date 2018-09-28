// 1星-70 Relational Operators

// 輸入共有幾組測資
// 分別輸入每組2數字
// 輸出2數字的大小關係

#include <iostream>

using namespace std;

int main()
{
	int cases, a, b;
	cin >> cases;
	while (cases--)
	{
		cin >> a >> b;
		if (a>b)cout << ">\n";
		else if (b>a)cout << "<\n";
		else cout << "=\n";
	}
}