// 1星-18 Divide, But Not Quite Conquer!

// 先輸入被除數與除數
// 如果被除數能一直讓除數整除到最後被除數的值為一，輸出其除的過程
// 如果不能則輸出"Boring!"

#include <iostream>

using namespace std;

int main()
{
	long long n, m, a[10000];
	while (cin >> n >> m)
	{
		bool can = true;
		int i = 1; a[0] = n;
		if (m == 1 || n < m){ cout << "Boring!\n"; can = false; continue; }
		while (n >= m)
		{
			if (n%m == 0){ n /= m; a[i] = n; i++; }
			else { cout << "Boring!"; can = false; break; }
		}
		if (can){ for (int j = 0; j < i - 1; j++)cout << a[j] << " "; cout << a[i - 1]; } cout << endl;
	}
}