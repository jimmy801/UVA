// 1�P-01 What's Cryptanalysis? 

// ����J�X��
// ��J���N�r��
// �̷ӿ�J�r���ѳ̦h��X��̤�(�ۦP�ɨ̷Ӧr���ǦC��X)

#include <iostream>

using namespace std;

int main()
{
	char input[1000]; int letterNum[26] = { 0 }, letter[26] = { 0 };
	char a[100]; cin.getline(a, 100, '\n');
	for (int i = 0; i < strlen(a); i++)
	if (a[i] == ' ')
	{
		a[i] ^= a[i + 1] ^= a[i] ^= a[i + 1];
	}	
	for (int i = 0; i < strlen(a); i++)
	if (a[i] == ' ')
	{
		a[i] = '\0'; break;
	}
	for (int i = 0; i < atoi(a); i++)
	{
		cin.getline(input, 1000, '\n');
		for (int j = 0; j < strlen(input); j++)
		{
			for (int k = 'A'; k <= 'Z'; k++){ if (input[j] == k){ letterNum[k - 'A']++; letter[k - 'A'] = k; break; } }
			for (int k = 'a'; k <= 'z'; k++){ if (input[j] == k){ letterNum[k - 'a']++; letter[k - 'a'] = k - 'a' + 'A'; break; } }
		}
	}
	for (int i = 0; i < 26; i++)
	for (int j = i + 1; j < 26; j++)
	{
		if (letterNum[j]>letterNum[i])
		{
			letterNum[i] ^= letterNum[j] ^= letterNum[i] ^= letterNum[j]; letter[i] ^= letter[j] ^= letter[i] ^= letter[j];
		}
		if (letterNum[i] == letterNum[j])if (letter[i]>letter[j])letter[i] ^= letter[j] ^= letter[i] ^= letter[j];
	}
	for (int i = 0;; i++)
	{
		if (letter[i] == 0)break;
		cout << (char)letter[i] << " " << letterNum[i] << endl;
	}
}