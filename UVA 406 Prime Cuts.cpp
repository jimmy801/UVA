// 1��-93 Prime Cuts

// ��ݔ�����ֵN����СֵC���ҵ�����֮�g���|��(K��)
// ���K��ż����ݔ�����gC*2���|��
// ���K���攵��ݔ�����gC*2-1���|��
// ���2*C��2*C-1��춵��K��ȫӡ��
// PS:1���@�e�����x���|��

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