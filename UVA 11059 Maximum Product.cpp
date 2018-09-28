// 1星-67 Maximum Product 

// 先輸入幾組測資
// 輸入每一組測資的數字
// 輸出該case所有數字的最大積

#include <iostream>

using namespace std;

int main()
{
	int cases = 1, n, num[18];
	while (cin >> n)
	{
		for (int i = 0; i<n; ++i)cin >> num[i];
		cout << "Case #" << cases++ << ": The maximum product is ";
		long long max = 0, product = 1;
		for (int i = 0; i<n; ++i)
		{
			product = 1;
			for (int j = i; j<n; ++j)
			{
				product *= num[j];
				if (product>max)max = product;
			}
		}
		cout << max << ".\n\n";
	}
}