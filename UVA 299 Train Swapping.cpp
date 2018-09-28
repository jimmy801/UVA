// 1星-91 Train Swapping 

// 輸入幾組測資
// 輸入每組幾節車廂
// 相鄰車廂如果前面車廂號碼大於後面車廂號碼會交換一次
// 輸出最少交換幾次


#include <iostream>

using namespace std;

int main()
{
	int cases, l, num[50];
	cin >> cases;
	while (cases--)
	{
		cin >> l;
		int ans = 0;
		for (int i = 0; i<l; ++i)
		{
			cin >> num[i];
			for (int j = 0; j<i; ++j)
			if (num[j]>num[i]){ ans++; swap(num[j], num[i]); }
		}
		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	}
}