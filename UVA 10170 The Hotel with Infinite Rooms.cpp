// 1�P-16 The Hotel with Infinite Rooms

// �Ĥ@�����n�������l�Ʀrn��n+1�����n+1+n+1-1����n+1
// ����J��l�Ʀr�M�n�䪺�ĴX��
// ��X�n�䪺�������Ʀr

#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	while (cin >> a >> b)
	{
		long long c = a;
		for (int i = a + 1;; i++)
		{
			if (c + i >= b && c < b){ cout << i << endl; break; }
			else if (c >= b){ cout << c << endl; break; }
			c += i;
		}
	}
}