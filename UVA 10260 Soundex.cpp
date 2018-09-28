// 1�P-30 Soundex

// �ھ�Soundex�X

// B, F, P, V �N��Ʀr1
// C, G, J, K, Q, S, X, Z �N��Ʀr2
// D, T �N��Ʀr3
// L �N��Ʀr4
// M, N �N��Ʀr5
// R �N��Ʀr6

// ��J�@��r��
// ��X�Ӧr��̲ŦXSoundex�X���Ʀr(�N��ۦP�Ʀr���s��r�������ƥX�{)

#include <iostream>

using namespace std;

int main()
{
	char a[][9] = { "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R" };
	char str[20];
	while (cin.get(str, 20, '\n'))
	{
		cin.ignore();
		int out[20] = { 0 };
		for (int i = 0; i < strlen(str); i++)
		{
			for (int j = 0; j < 6; j++)
			{
				for (int k = 0; k < 9; k++)
				{
					if (a[j][k] == '\0')break;
					if (!i)if (a[j][k] == str[i]){ out[i] = j + 1; cout << j + 1; break; }
					if (a[j][k] == str[i])out[i] = j + 1;
					if (a[j][k] == str[i] && out[i - 1] != j + 1){ out[i] = j + 1; cout << j + 1; break; }
				}
			}
		}
		cout << endl;
	}
}