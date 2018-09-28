// 1星-89 Count on Cantor 

// 輸入數字
// 輸出它是幾分之幾


#include <iostream>

using namespace std;

int main()
{
	int n, k, i, tmp, j;
	while (cin >> n && n)
	{
		k = 1;
		while ((k + 1) * k / 2 < n)++k;
		i = (k + 1)*k / 2, tmp = k, j = 1;
		while (i != n)--i, --tmp, ++j;
		cout << "TERM " << n << " IS ";
		if (k % 2)cout << j << "/" << tmp << endl;
		else cout << tmp << "/" << j << endl;
	}
}