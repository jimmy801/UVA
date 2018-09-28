// 1星-07 Hashmat the brave warrior 

// 輸入兩個數字
// 輸出大的減小的

#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	while (cin >> a >> b)
	{
		a > b ? cout << a - b << endl : cout << b - a << endl;
	}
}