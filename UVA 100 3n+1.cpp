// 1�P-00 3n+1

// ����J�d��_�Ia�M���Ib
// ��X�_�I�M���I����
// �p�G�q�_�I����I���������ƴN��2
// �p�G�q�_�I����I�������_�ƴN���H3�A�[1
// ���ƤW����B�J����ӭȵ���1
// ��X�_�I����I���i�H����"3n+1"���̦h����

#include <iostream>
using namespace std;
int main()
{
	int n, a, b, len, count;
	while (cin >> a >> b){
		cout << a << " " << b << " ";
		if (a > b)swap(a, b);
		len = 0;
		for (int i = a; i <= b; i++){
			n = i; count = 1;
			while (n != 1){ n = n % 2 ? 3 * n + 1 : n / 2; count++; }
			len = len < count ? count : len;
		}
		cout << len << endl;
	}
}