// 1�P-05 Vito's family

// ����J���X�ո��
// �A�̧ǥ���J�C����Ƥ��O�����X����
// �\�b���Ҧ����̪񪺤@����
// �p��C����Ʀܤֻݭn���X����ÿ�X

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int r;
	cin >> r;
	while(r--)
	{
		int sN, s[30001] = { 0 };
		cin >> sN;
		for (int i = 0; i < sN; i++)cin >> s[i];
		sort(s, s + sN);
		int num = 0;
		for (int i = 0; i < sN; i++)num += abs(s[sN/2] - s[i]);
		cout << num << endl;
	}
}