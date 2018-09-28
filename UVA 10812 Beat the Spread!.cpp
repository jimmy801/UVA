// 1星-55 Beat the Spread!

// 先輸入有幾個case
// 再輸入分數總合和分數差
// 輸出分數多的和分數少的

#include <iostream>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int sum, difference;
		cin >> sum >> difference;
		if (sum<difference){ cout << "impossible\n"; continue; }
		int a = (sum + difference) / 2;
		if (2 * a - sum != difference){ cout << "impossible\n"; continue; }
		cout << a << " " << sum - a << endl;
	}
}