// 1琍-02 Funny Encryption Method

// 块Τ碭掸秈计
// 块秈计
// 块赣秈计锣Θ2秈计┮Τ计㎝ 赣秈计锣Θ16秈计┮Τ计㎝

#include <iostream>

using namespace std;

int main()
{
	int n, m, temp = 0, p = 1, tem16 = 0; char tem[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		_itoa_s(m, tem, 2);
		for (int j = 0; j < strlen(tem); j++)temp += tem[j] - '0';
		cout << temp << " "; temp = 0;
		while (m>0){ tem16 += (m % 10) * p; m /= 10; p *= 16; }
		_itoa_s(tem16, tem, 2); tem16 = 0; p = 1;
		for (int j = 0; j < strlen(tem); j++)temp += tem[j] - '0';
		cout << temp << "\n"; temp = 0;
	}
}
