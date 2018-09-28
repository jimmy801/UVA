// 1星-93 Prime Cuts

// 先輸入最大值N和最小值C，找到他們之間的質數(K個)
// 如果K是偶數，輸出中間C*2個質數
// 如果K是奇數，輸出中間C*2-1個質數
// 如果2*C或2*C-1大於等於K就全印出
// PS:1在這裡被定義為質數

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n, c;
	while (cin >> n >> c)
	{
		int k = 0;
		int num[1024];
		num[k++] = 1; num[k++] = 2;
		for (int i = 3; i <= n; i += 2)
		{
			bool check = true;
			for (int j = 2; j <= sqrt(i); j++)
			if (!(i%j))
				check = false;
			if (check){ num[k++] = i; }
		}
		cout << n << " " << c << ":";
		bool out = false;
		if (2 * c >= k || 2 * c - 1 >= k)
		for (int i = 0; i < k; i++){ cout << " " << num[i]; out++; }
		if ((k % 2) && !out)
		for (int j = 0, i = k / 2 - c + 1; j < c * 2 - 1; j++, i++)cout << " " << num[i];
		if (!(k % 2) && !out)
		for (int j = 0, i = k / 2 - c; j < c * 2; j++, i++)cout << " " << num[i];
		cout << endl << endl;
	}
}