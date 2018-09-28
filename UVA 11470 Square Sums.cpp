// 1星-80 Square Sums

// 輸入是幾乘己的矩陣
// 輸入數字
// 輸出一圈一圈的數字總和

#include <iostream>

using namespace std;

int main()
{
	int num, square[10][10], cases = 1;
	while (cin >> num&&num)
	{
		cout << "Case " << cases++ << ": ";
		for (int i = 0; i<num; ++i)
		for (int j = 0; j<num; ++j)
			cin >> square[i][j];
		int ans[5] = {};
		for (int k = 0; k<(num + 1) / 2; ++k)
		for (int i = k; i<num - k; ++i)
		{
			if (i == k || i == num - 1 - k)
			for (int j = k; j<num - k; ++j)ans[k] += square[i][j];
			else ans[k] += square[i][k] + square[i][num - 1 - k];
		}
		cout << ans[0];
		for (int i = 1; i<(num + 1) / 2; ++i)cout << " " << ans[i];
		cout << endl;
	}
}