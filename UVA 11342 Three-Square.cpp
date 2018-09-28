// 1星-74 Three-Square 

// 輸入幾組測資
// 輸入數字
// 輸出該數字是哪3個數的平方相加

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int cases, num;
	cin >> cases;
	while (cases--)
	{
		cin >> num;
		bool b = 0;
		for (int i = 0; i<50; ++i)
		{
			for (int j = 0; j<150; ++j)
			{
				for (int k = 0; k<221; ++k)
				{
					if (pow(i, 2) + pow(j, 2) + pow(k, 2) == num){ cout << i << " " << j << " " << k << endl; b++; break; }
					else if (i == 49){ cout << "-1\n"; b++; break; }
				}
				if (b)break;
			}
			if (b)break;
		}
	}
}