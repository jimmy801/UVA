// 1星-65 Cheapest Base 

// 先輸入幾組測資
// 輸入每一個數字所需的墨水數
// 輸入該case有幾個數字要測
// 輸入數字
// 輸出該數要用甚麼進制所需的墨水數最少

#include <iostream>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	int i = 1;
	while (cases--)
	{
		cout << "Case " << i++ << ":\n";
		int cost[36];
		for (int j = 0; j<36; ++j)cin >> cost[j];
		int test, num;
		cin >> num;
		while (num--)
		{
			cin >> test;
			cout << "Cheapest base(s) for number " << test << ":";
			int bases[37], less = 9999;
			for (int j = 2; j<37; ++j)
			{
				int sum = 0;
				for (int k = test; k>0; k /= j)sum += cost[k%j];
				bases[j] = sum;
				if (sum<less)less = bases[j];
			}
			for (int k = 2; k<37; ++k)if (bases[k] == less)cout << " " << k;
			cout << endl;
		}
		if (cases)cout << endl;
	}
}