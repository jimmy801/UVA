// 1�P-08 What is the Probability?
// {[(1-p)^(i-1)]*p*1}/[1-(1-p)^n]

// ����J���X�����
// �̷ӨC����Ƥ��O�̧ǿ�J�C���H��,�@���C����Ӿ��v,�ĴX�ӤH���
// ��X�ĴX�H��Ӫ����v

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int c, people, which; double p;
	while (cin >> c)
	{
		for (int i = 0; i < c; i++)
		{
			cin >> people >> p >> which;
			if (p<0.00001)
				cout << "0.0000" << endl;
			else
			cout << setprecision(4) << fixed << (pow(1 - p, which - 1)*p) / (1 - pow(1 - p, people)) << endl;
		}
	}
}