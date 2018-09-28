// 1星-84 Jumping Mario

// 輸入幾組測資
// 輸入有幾根柱子
// 輸入每根柱子高度
// 輸出會向上跳幾次向下跳幾次

#include <iostream>

using namespace std;

int main()
{
	int num, cases = 0, n, prev, now;
	cin >> num;
	while (num--)
	{
		int up = 0, low = 0;
		cout << "Case " << ++cases << ": ";
		cin >> n;
		for (int i = 0; i<n; ++i)
		{
			cin >> now; 
			if (i)
			{
				if (now<prev)++low;
				if (now>prev)++up; 
			}
			prev = now;
		}
		cout << up << " " << low << endl;
	}
}