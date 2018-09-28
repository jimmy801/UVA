// 1�P-22 Satellites

// ����J�q�a�y��(���]�t�a�y�b�|6440 km)��ìP���Z��s
// �A��J�ìP�B�樤��a(�H�a�y�����)
// ���ۿ�J�r��"min"��"deg"�N��ӹB�檺���׬O�H"��"�p��ΥH"��"�p��
// ��X�ӽìP�B�檺�����M�ӽìP�B�檺�_�I�M���I���Z��(����),��X�����ܤp���I��Ĥ���

#include <iostream>
#include <iomanip>
#include <math.h>

#define pi 2*acos(0.0)

using namespace std;

int main()
{
	double s, a; char str[4];
	while (cin >> s >> a >> str)
	{
		s += 6440;
		if (strcmp("min", str) == 0)a /= 60;
		if (a > 180)a = 360 - a;
		cout << fixed << setprecision(6) << s * 2 * pi * a / 360 << " " << 2 * sin(a * pi / 360)*s << endl;
	}
}