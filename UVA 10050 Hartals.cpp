// 1�P-06 Hartals

// ����J���X��case
// ��J�϶���(�N�O�b���ӽd�򤺪��Ѽ�)
// ��J���X�ӹ���n�}�u
// ���O��J�U����b���϶��Ѥ��C�j�X�ѽ}�u�@��
// �̷Ӥ��Pcase���O��X�`�@���ǤѼƳQ�v�T(���餣��)

#include <iostream>

using namespace std;

int main()
{
	int Case, partiesDays[101], parties, Days, ans = 0; bool days[3652] = { false };
	while (cin >> Case)
	{
		for (int i = 0; i < Case; i++)
		{
			cin >> Days >> parties;
			for (int j = 0; j < parties; j++)cin >> partiesDays[j];
			for (int j = 0; j < parties; j++)
			for (int k = 1; k <= Days; k++)
			if (!(k % partiesDays[j]))days[k] = true;
			for (int j = 1; j <= Days; j++)
			if (!(j % 7 % 6))
				days[j] = false;
			for (int j = 1; j <= Days; j++)
			if (days[j]){ ans++; days[j] = false; }
			cout << ans << endl; ans = 0;
		}
	}
}