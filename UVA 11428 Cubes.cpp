// 1星-78 Cubes

// 輸入數字
// 輸出該數字是幾的3次方減掉幾的3次方

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	while (cin >> num&&num)
	{
		int ans1 = 0, ans2 = 0;
		for (int i = 1; i<24; ++i)
		for (int j = 1; j<24; ++j)
		if (pow(i, 3) - pow(j, 3) == num){ ans1 = i, ans2 = j; break; }
		if (ans1)cout << ans1 << " " << ans2 << endl;
		else cout << "No solution\n";
	}
}