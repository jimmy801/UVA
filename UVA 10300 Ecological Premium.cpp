// 1�P-35 Ecological Premium 

// ����J���մX��case
// ��J���ղĤ@��case���X�ӹA��
// ��J�ӧO�A�ҹA�����n�A�A���̰ʪ����ƥءA�ӹA�Ҫ����O����
// ��X�ʪ������~��Ŷ�*�A�����O����*�ʪ��ƥ�

#include <iostream>

using namespace std;

int main()
{
	float a[3][20], n, m;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			for (int i = 0; i < m; i++)
			for (int j = 0; j < 3; j++)
				cin >> a[j][i];
			float t = 0;
			for (int i = 0; i < m; i++)	t += (((a[0][i] / a[1][i])) * a[2][i])*a[1][i];
			cout << t << endl;
		}
	}
}