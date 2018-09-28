// 1星-79 Square Numbers 

// 輸入數字
// 輸出數字區間內有幾個平方數字

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b&&a)
	{
		int ans = 0;
		for (int i = 1; i <= b/2; ++i)
		if (pow(i, 2) <= b&&pow(i, 2) >= a)++ans;
		cout << ans << endl;
	}
}