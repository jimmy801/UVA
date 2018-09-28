// 1星-68 B2-Sequence 

// 先輸入幾組測資
// 輸入每一測資的數字
// 如果未排序或其序列中任2數字和相等代表非B2序列
// 輸出該序列是否為B2序列

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int cases = 1, test;
	while (cin >> test)
	{
		int num[100], i = 0, n = 0, total[5050];
		cout << "Case #" << cases++ << ": It is ";
		while (test--)cin >> num[i++];
		if (!is_sorted(num, num + i)){ cout << "not a B2-Sequence.\n\n"; continue; }
		for (int j = 0; j<i; ++j)
		for (int k = j; k<i; ++k)
			total[n++] = num[j] + num[k];
		sort(total, total + n);
		for (int j = 1; j<n; ++j)if (total[j] == total[j - 1]){ cout << "not "; break; }
		cout << "a B2-Sequence.\n\n";
	}
}