// 1�P-19 All You Need Is Love 

// ��J�X��case
// ��J�C�ժ���ӤG�i��Ʀr
// �Y��ӤG�i��Ʀr�ܤֳ������t�@�ӤG�i��ƦrL�B���̫ᵥ��L�A��X"Pair #n: All you need is love!"
// �Y��ӤG�i��Ʀr�S���@�P��L�θ�L�u���@�Ӧ�ơA��X"Pair #n: Love is not all you need!"

#include <iostream>

using namespace std;

int trans(char a[])
{
	int num = 0;
	for (int i = strlen(a) - 1, j = 1; i >= 0; i--, j *= 2)
		num += (a[i] - '0') * j;
	return num;
}

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			char s1[31], s2[31];
			cin >> s1 >> s2;
			int S1 = trans(s1), S2 = trans(s2);
			while((S1 %= S2)&&(S2 %= S1));
			if (S1 + S2  == 1){cout << "Pair #" << i + 1 << ": Love is not all you need!\n"; continue; }
			cout << "Pair #" << i + 1 << ": All you need is love!\n"; 
		}
	}
}