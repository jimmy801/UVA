// 1星-01 What's Cryptanalysis? 

// 先輸入幾行
// 輸入任意字串
// 依照輸入字母由最多輸出到最少(相同時依照字母序列輸出)

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