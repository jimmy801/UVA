// 1星-76 Symmetric Matrix

// 輸入有幾組測資
// 輸入是幾乘幾的矩陣(N = 3 代表是 3 * 3)
// 輸入每個矩陣數字
// 輸出該矩陣是否為對稱矩陣

#include <iostream>

using namespace std;

int main()
{
	int cases = 1, n, m[100][100], t;
	char other;
	cin >> t;
	while (t--)
	{
		bool symmetric = true;
		cout << "Test #" << cases++ << ": ";
		cin >> other >> other >> n;
		for (int i = 0; i<n; ++i)
		for (int j = 0; j<n; ++j)
			cin >> m[i][j];
		for (int i = 0, j = 0;; ++j)
		{
			if (i == n / 2 && j == n / 2)break;
			if (m[i][j] != m[n - 1 - i][n - 1 - j] || m[i][j]<0){ symmetric = 0; break; }
			if (j == n - 1){ ++i, j = -1; continue; }
		}
		if (symmetric)cout << "Symmetric.\n";
		else cout << "Non-symmetric.\n";
	}
}