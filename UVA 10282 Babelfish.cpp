// 1�P-34 Babelfish 

// ����J��r�M�n��J�ƻ�|�������r
// �A��J�@�Ӧr��ݥL���S���b�إߪ��r���
// �p�G����X�ӳ�r�A�S�h��X"eh"

#include <iostream>

using namespace std;

int main()
{
	char dic[100][100], word[100][100], str[1000]; int j = 0;
	while (cin.getline(str,1000,'\n'))
	{
		bool jump = false;
		if (!strcmp(str,""))break;
		for (int i = 0, m = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ')
			{
				i++;
				for (int k = 0; i < strlen(str); i++, k++)word[j][k] = str[i];
				j++;
				jump = true;
			}
			if (jump){ jump = false; m = 0; continue; }
			dic[j][m] = str[i]; 
			m++;
		}
	}
	while (cin >> str)
	{
		for (int i = 0; i <= j; i++)
		{
			if (!strcmp(str, word[i])){ for (int k = 0; k < strlen(dic[i]); k++)cout << dic[i][k]; cout << endl; break; }
			if(i == j) cout << "eh\n";
		}
	}
}